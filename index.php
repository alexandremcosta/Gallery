<?php
    include("content/page.inc");
    $index = new Page();
    $index->SetContent("
        <div id=\"main\"><p><blockquote>
        &#34;Deixe-me ir, preciso andar,<br/>
        Vou por ai, a procurar,<br/>
        Sorrir pra nao chorar<br/>
        &#40;...&#41;<br/>
        E se alguem por mim perguntar,<br/>
        Diga que eu so vou voltar<br/>
        Quando eu me encontrar...&#34;
        </blockquote><span id=\"author\">&#40;Candeia&#41;</span></p></div>
        
        ");
    $index->Display();
?>
