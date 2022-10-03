
//quote data ----> 
let quoteArr = [
    { quote: "He that falls in love with himself will have no rivals.", author: "-Benjamin Franklin" },
    { quote: "Life is ten percent of what happens to you and ninety percent how you respond to it.", author: "Charles Swindoll" },
    { quote: "A great man is always willing to be little.", author: "-Ralph Waldo Emerson" },
    { quote: "That's one small step for a man, one giant leap for mankind.", author: "-Neil Armstrong" },
    { quote: "Every man is guilty of all the good he did not do.", author: "-Voltaire" },
    { quote: "A successful man is one who can lay a firm foundation with the bricks others have thrown at him.", author: "-David Brinkley" },
    { quote: "In three words I can sum up everything I've learned about life: It goes on.", author: "-Robert Frost" },
    { quote: "If you judge people you don't have time to love them.", author: "-Mother Teresa" },
    { quote: "The future belongs to those who prepare for it today.", author: "-Malcolm X" },
    { quote: "Don't be afraid to give up the good to go for the great.", author: "-John D. Rockerfeller" },
    { quote: "The Greatest glory in living lies not in never falling, but in rising every time we fall.", author: "-Nelson Mandela" },
    { quote: "When you reach the end of your rope tie a knot in it and hang on.", author: "-Frankin D. Roosevelt" },
    { quote: "No one can make you feel inferior without consent.", author: "-Eleanor Roosevelt" },
    { quote: "In the long run, the sharpest weapon of all is a kind and gentle spirit.", author: "-Anne Frank" },
    { quote: "Sing like no one's listening, love like you've never been hurt, dance like nobody's watching, and live like it's heaven on earth.", author: "-Mark twain" },
    { quote: "Do what you can with what you have, where you are.", author: "Teddy Roosevelt" },
    { quote: "People are just as happy as they make up their minds to be.", author: "-Abraham Lincoln" },
    { quote: "Every great dream begins with a dreamer. Always remember, you have within you the strength, the patience, and the passion to reach for the stars to change the world.", author: "-Harriet Tubman" },
    { quote: "Success is not final, failure is not fatal: it is the courage to continue that counts.", author: "-Winston Churchill" },
    { quote: "Remember that the happiest people are not those getting more, but those giving more.", author: "-H. Jackson Brown, Jr" },
    { quote: "The only impossible journey is the one you never begin.", author: "-Tony Robbins" },
    { quote: "When I dare to be powerful - to use my strength in the service of my vision, then it becomes less and less important whether I am afraid.", author: "-Audre Lorde" },
    { quote: "Insanity is doing the same thing over and over again and expecting different results.", author: "-Albert Einstein" },
    { quote: "Everything you've ever wanted is on the other side of fear.", author: "-George Addair" },
    { quote: "We design our lives with the power of choices.", author: "-Richard Bach" },
    { quote: "Shoot for the moon. Even if you miss, you'll land among the stars.", author: "-Les Brown" },
    { quote: "IF you tell the truth, you don't have to remember anything.", author: "-Mark Twain" },
    { quote: "Knowing yourself is the beginning of all wisdom.", author: "-Aristotle" },
    { quote: "We are what we repeatedly do; excellence, then, is not an act but a habit.", author: "-Aristotle" },
    { quote: "Life is not a problem to be solved, but a reality to be experienced.", author: "-Soren Kierkegaard" },
    { quote: "All that we see and seem is but a dream within a dream.", author: "-Edgar Allen Poe" },
    { quote: "The question isn't who is going to let me; it's who is going to stop me.", author: "-Ayn Rand" },
    { quote: "Yesterday is history, tomorrow is a mystery, today is a gift of God, which is why we call it the present.", author: "-Bil Keane" },
    { quote: "Once you've accepted your flaws, no one can use them agianst you.", author: "-George R. R. Martin" },
    { quote: "When we strive to become better thab we are, everything around us becomes better too.", author: "-Paolo Coelho" },
    { quote: "Our greatest fear should not be of failure... but of succeeding at the things in life that don't really matter.", author: "-Francis Chan" },
    { quote: "You will face many defeats in life, but never let yourself be defeated.", author: "-Maya Angelou" },
    { quote: "Challenges are what make life interesting and overcoming them is what makes life meaningful.", author: "-Joshua J. Marine" },
    { quote: "Keep your face to the sunshine and you can never see the shadow.", author: "Helen Keller" },
    { quote: "Always forgive your enemies; nothing annoys them so much.", author: "-Oscar Wilde" },
    { quote: "Power tends to corrupt, and absolute power corrupts absolutely.", author: "-John Dalberg-Acton" },
    { quote: "Do not go where the path may lead; go instead where there is no path and leave a trail.", author: "-Ralph Waldo Emerson" },
    { quote: "Those who cannot remember the past are condemned to repeat it.", author: "-George Santayana" },
    { quote: "Nothing is impossible, the word itself says, 'I'm possible!'", author: "-Audrey Hepburn" },
    { quote: "Always remember that you are absolutely unique. Just like everyone else.", author: "-Margaret Meade" },
    { quote: "It is better ti fail in originality than to succeed in limitation.", author: "-Herman Melville" },
    { quote: "A mind is like a parachute. It doesn't work if it isn't open.", author: "-Frank Zappa" },
    { quote: "A lion doesn't concern himself with the opinions of the sheep.", author: "-Lionel Messi" },
    { quote: "The way to get started is to quit talking and begin doing.", author: "-Walt Disney" },
    { quote: "Originality is nothing but judicious imitation.", author: "-Voltaire" },
    { quote: "A friend is someone who gives you total freedom to be yourself", author: "-Jim Morrison" },
    { quote: "I alone cannot change the world, but I can cast a stone across the water to create many ripples.", author: "-Mother Teresa" },
    { quote: "Life is like a box of chocolates. You never know what you're going to get.", author: "Forrest Gump" },
    { quote: "Never let the fear of striking out keep you from playing the game.", author: "-Babe Ruth" },
    { quote: "The opposite of love is not hate; it's indifference.", author: "-Elie Wiesel" },
    { quote: "Those who dare to fail miserably can achieve greatly.", author: "-John F. Kennedy" },
    { quote: "Great minds discuss ideas; average minds discuss events; small minds discuss people.", author: "-Eleanor Roosevelt" },
    { quote: "Twenty years from now you'll be more disappointed by the things that you didn't do than by the ones you did do.", author: "-Mark Twain" },
    { quote: "Strive not to be a success, but rather to be of value.", author: "-Albert Einstein" },
    { quote: "If you're going through hell, keep going.", author: "-Winston Churchill" },
    { quote: "You miss 100 percent of the shots you never take.", author: "-Wayne Gretzky" },
    { quote: "Tis better to have loved and lost than to have never loved at all.", author: "-Alrded Lord Tennyson" },
    { quote: "Whether you think you can or you think you can't, you're right.", author: "-Henry Ford" },
    { quote: "You only live once, but if you do it right, once is enough.", author: "-Mae West" },
    { quote: "You must be the change you wish to see in the world.", author: "-Mahatma Gandhi" },
    { quote: "Life is what happens when you're busy making other plans.", author: "-John Lennon" },
    { quote: "The journey of a thousand miles begins with one step.", author: "-Lao Tzu" }
];

//random number generating

random = () => {
    let num = Math.floor(Math.random()*quoteArr.length + 1);
    
    //getting quote and author text area
    let quoteArea = document.querySelector(".quote");
    let authorArea = document.querySelector(".author");

    let quote = quoteArr[num].quote;
    let author = quoteArr[num].author;

    quoteArea.innerHTML = quote;
    authorArea.innerHTML = author;
}


//random background generating
ranBg = () => {
    let n = Math.floor(Math.random()*11 + 1);

    let bg = document.body;
    bg.style.background = `url(/images/bg${n}.jpg)`;
    bg.style.backgroundSize = "100%";
}
//clicking button for next quote
nextQuote = () => {
    ranBg();
    random();
}