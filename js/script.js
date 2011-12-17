/* Author:

*/

jQuery(function($) {
    var max_size = 100;
    $("#mosaic img.mini").each(function(i) {
        if ($(this).height() > $(this).width()) {
            var h = max_size;
            var w = Math.ceil($(this).width() / $(this).height() * max_size);
        } else {
            var w = max_size;
            var h = Math.ceil($(this).height() / $(this).width() * max_size);
        }
        $(this).css({ height: h, width: w });
    });
});





