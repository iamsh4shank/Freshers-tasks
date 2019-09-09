use regex::Regex;
fn main() 
{
let re : Regex = Regex::new( re r"^([a-zA-z0-9_\-\.]+)@([a-zA-z0-9_\-\.])\.([a-zA-Z]{2,5})$").unwrap();
assert!(re.is_match(text: "example@gmail.com"));
println!("email ID is correct");
}
