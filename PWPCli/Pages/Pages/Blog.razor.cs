using Microsoft.AspNetCore.Components;

namespace PWPCli.Pages.Pages
{
    public partial class Blog
    {
        public int currentCount { get; set; }
        

        public void incrementCount()
        {
            currentCount++;
        }
        List<Posteo> posts = new List<Posteo>();

        protected override void OnInitialized()
        {
            //llamar a la base de datos y traerme los post.

            #region Necesitaria algo parecido a esto
            //llamar a la api (algun endpoint que te hagas) y ese endpoint llama a la base.
            //List<Posteo> postsList = posts.ToList();

            //foreach (Posteo post in postsList)
            //{
            //    posts.Add(post);
            //}
            #endregion

            //Posteo post1 = new Posteo
            //{
            //    Id = 1,
            //    Title = "My First popota",
            //    Content = "Es un hecho establecido hace demasiado tiempo que un lector se distraerá con el contenido del texto de un sitio mientras que mira su diseño. El punto de usar Lorem Ipsum es que tiene una distribución más o menos normal de las letras, al contrario de usar textos como por ejemplo \"Contenido aquí, contenido aquí\". Estos textos hacen parecerlo un español que se puede leer. Muchos paquetes de autoedición y editores de páginas web usan el Lorem Ipsum como su texto por defecto, y al hacer una búsqueda de \"Lorem Ipsum\" va a dar por resultado muchos sitios web que usan este texto si se encuentran en estado de desarrollo. Muchas versiones han evolucionado a través de los años, algunas veces por accidente, otras veces a propósito (por ejemplo insertándole humor y cosas por el estilo)."
            //};

            //Posteo post2 = new Posteo
            //{
            //    Id = 2,
            //    Title = "PERO QUE BLOG DE MIELDA ",
            //    Content = "Hay muchas variaciones de los pasajes de Lorem Ipsum disponibles, pero la mayoría sufrió alteraciones en alguna manera, ya sea porque se le agregó humor, o palabras aleatorias que no parecen ni un poco creíbles. Si vas a utilizar un pasaje de Lorem Ipsum, necesitás estar seguro de que no hay nada avergonzante escondido en el medio del texto. Todos los generadores de Lorem Ipsum que se encuentran en Internet tienden a repetir trozos predefinidos cuando sea necesario, haciendo a este el único generador verdadero (válido) en la Internet. Usa un diccionario de mas de 200 palabras provenientes del latín, combinadas con estructuras muy útiles de sentencias, para generar texto de Lorem Ipsum que parezca razonable. Este Lorem Ipsum generado siempre estará libre de repeticiones, humor agregado o palabras no características del lenguaje, etc."
            //};
            //Posteo post122 = new Posteo
            //{
            //    Id = 3,
            //    Title = "PERO QUE BLOG DE MIELDA2 ",
            //    Content = "Hay muchas variaciones de los pasajes de Lorem Ipsum disponibles, pero la mayoría sufrió alteraciones en alguna manera, ya sea porque se le agregó humor, o palabras aleatorias que no parecen ni un poco creíbles. Si vas a utilizar un pasaje de Lorem Ipsum, necesitás estar seguro de que no hay nada avergonzante escondido en el medio del texto. Todos los generadores de Lorem Ipsum que se encuentran en Internet tienden a repetir trozos predefinidos cuando sea necesario, haciendo a este el único generador verdadero (válido) en la Internet. Usa un diccionario de mas de 200 palabras provenientes del latín, combinadas con estructuras muy útiles de sentencias, para generar texto de Lorem Ipsum que parezca razonable. Este Lorem Ipsum generado siempre estará libre de repeticiones, humor agregado o palabras no características del lenguaje, etc."
            //};
            //Posteo post222 = new Posteo
            //{
            //    Id = 4,
            //    Title = "PERO QUE BLOG DE MIELDA3",
            //    Content = "This is my first poop"
            //};
            //Posteo post23 = new Posteo
            //{
            //    Id = 5,
            //    Title = "PERO QUE BLOG DE MIELDA4",
            //    Content = "This is my first poop"
            //};
            //Posteo post34 = new Posteo
            //{
            //    Id = 6,
            //    Title = "PERO QUE BLOG DE MIELDA5",
            //    Content = "This is my first poop"
            //};
            //Posteo post55 = new Posteo
            //{
            //    Id = 7,
            //    Title = "PERO QUE BLOG DE MIELDA6",
            //    Content = "This is my first poop"


            //};
            //Posteo post66 = new Posteo
            //{
            //    Id = 8,
            //    Title = "PERO QUE BLOG DE MIELDA7",
            //    Content = "This is my first poop"
            //};

            //posts.Add(post1);
            //posts.Add(post2);
            //posts.Add(post122);
            //posts.Add(post222);
            //posts.Add(post23);
            //posts.Add(post34);
            //posts.Add(post55);
            //posts.Add(post66);

            //post122.Content = post122.Content.Substring(0, 50); example ah re que no sabia ingles
        }

        private void IrAPost(int id)
        {
            // Navega a la página de destino
            Navigation.NavigateTo("/Post/" + id);
        }
    }
    public class Posteo
    {
        public int Id { get; set; }
        public string Title { get; set; }
        public string Content { get; set; }

        // IMAGEN 
        // FECHA
        // AUTOR
    }

}
