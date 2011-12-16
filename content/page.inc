<?php
class Page
{
    var $content;

    function SetContent($newcontent)
    {
        $this->content = $newcontent;
    }

    function DisplayMenu()
    {
        $folder_galeries = "./galeries";
        
        $folder = opendir($folder_galeries);
        while ($galerie = readdir($folder)) {
            $galeries[] = $galerie;
        }

        echo "<nav>\n<ul>";
        
        sort($galeries);
        
        foreach ($galeries as $galerie) {
            if ($galerie != "." && $galerie != "..") {
                $galerieWithoutNumber = trim($galerie, "0123456789");
                $galerieWithoutNumber = trim($galerieWithoutNumber); 
                echo "<li><a href=\"galeries/".$galerie."/galerie.php\"><span class=\"link\">".$galerieWithoutNumber."</span></a></li>\n";
            }
        }

        echo "</ul>\n</nav>";
        
    }

    function Display()
    {
?>

        <!doctype html>
        <!--[if lt IE 7]> <html class="no-js ie6 oldie" lang="en"> <![endif]-->
        <!--[if IE 7]>    <html class="no-js ie7 oldie" lang="en"> <![endif]-->
        <!--[if IE 8]>    <html class="no-js ie8 oldie" lang="en"> <![endif]-->
        <!--[if gt IE 8]><!--> <html class="no-js" lang="en"> <!--<![endif]-->
        <!--[if lt IE 9]>
            <script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
        <![endif]-->
        <head>
            <meta charset="utf-8">
            <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">

            <title>alexandrecosta.co.cc</title>

            <link rel="stylesheet" href="css/style.css">

            <script src="js/libs/modernizr-2.0.6.min.js"></script>
        </head>
        <body>
        <div id="container">
            <section id="body">
                <section id="left">
                    <nav>
                        <?php
                            $this->DisplayMenu();
                        ?>
                    </nav>
                </section>
                <section id="right">
                    <section id="text">
                        <?php
                            echo $this->content;
                        ?>
                    </section>
                </section>
                <div class="clear"></div>
            </section>
            <footer>
            </footer>
        </div> <!--! end of #container -->

        <script src="//ajax.googleapis.com/ajax/libs/jquery/1.6.2/jquery.min.js"></script>
        <script>window.jQuery || document.write('<script src="js/libs/jquery-1.6.2.min.js"><\/script>')</script>

        <!-- scripts concatenated and minified via ant build script-->
        <script src="js/plugins.js"></script>
        <script src="js/script.js"></script>
        <!-- end scripts-->

        </body>
        </html>
<?php
    }
}
?>    
