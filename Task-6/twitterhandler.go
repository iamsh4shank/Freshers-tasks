package main

import (
    "github.com/dghubble/go-twitter/twitter"
    "github.com/dghubble/oauth1"
    "os"
    "flag"
    "fmt"
	
)

func main() {
	var name string    
	fmt.Println("Enter the name of the user whoose detail u want to know ?")
	fmt.Scanln(&name)
	tn:=flag.String("twitterHandler",name,"it contains the name of twitter handler") 
	flag.Parse()
	config := oauth1.NewConfig("5GYbYnrjVEyrDovlGxxUeaYPy", "mQ5xQ8yo3sXq8i9YQ6LjwkvpwrKj0fdKmIwEsEhkcid2ydWGEX")
	token := oauth1.NewToken("838056936423698433-fJlC8wtIX1fXKGPM8Aq4RDRQjgJnwVW", "a34cOtqffG1LdhmHkVi8KT21dOxOqQ55245mtPIXKjF9G")
	httpClient := config.Client(oauth1.NoContext, token)
	client := twitter.NewClient(httpClient)
	f, err := os.Create("userHandler.txt")

	params := &twitter.FollowerListParams{
	        ScreenName: *tn,
	}
    
	followers, resp, err := client.Followers.List(params)
	var count int = 0;
	fmt.Println(resp, err)
	f.WriteString("Followers - " + *tn)
	for _, follower := range followers.Users {
		count++
		f.WriteString("\n" + follower.ScreenName)
	}
	f.WriteString("\n")
	f.WriteString(fmt.Sprintf("\n", count))
	f.Close()
}
