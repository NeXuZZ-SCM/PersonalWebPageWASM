namespace PWPCli.Pages.Pages
{
    public partial class Blog
    {
        public int currentCount { get; set; }
        

        public void incrementCount()
        {
            currentCount++;
        }
        List<Post> posts = new List<Post>();

        protected override void OnInitialized()
        {
            //llamar a la base de datos y traerme los post.

            Post post1 = new Post
            {
                Id = 1,
                Title = "My First popota",
                Content = "This is my first shit"
            };

            Post post2 = new Post
            {
                Id = 1,
                Title = "PERO QUE BLOG DE MIELDA ",
                Content = "This is my first poop"
            };
            Post post122 = new Post
            {
                Id = 1,
                Title = "PERO QUE BLOG DE MIELDA ",
                Content = "This is my first poop"
            };
            Post post222 = new Post
            {
                Id = 1,
                Title = "PERO QUE BLOG DE MIELDA ",
                Content = "This is my first poop"
            };
            Post post23 = new Post
            {
                Id = 1,
                Title = "PERO QUE BLOG DE MIELDA ",
                Content = "This is my first poop"
            };
            Post post34 = new Post
            {
                Id = 1,
                Title = "PERO QUE BLOG DE MIELDA ",
                Content = "This is my first poop"
            };
            Post post55 = new Post
            {
                Id = 1,
                Title = "PERO QUE BLOG DE MIELDA ",
                Content = "This is my first poop"


            };
            Post post66 = new Post
            {
                Id = 1,
                Title = "PERO QUE BLOG DE MIELDA ",
                Content = "This is my first poop"
            };

            posts.Add(post1);
            posts.Add(post2);
            posts.Add(post122);
            posts.Add(post222);
            posts.Add(post23);
            posts.Add(post34);
            posts.Add(post55);
            posts.Add(post66);


        }
    }
    public class Post
    {
        public int Id { get; set; }
        public string Title { get; set; }
        public string Content { get; set; }
    }

}
