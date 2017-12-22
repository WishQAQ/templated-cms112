jQuery(document).ready(function ($) {
     $('#gotop').click(function () { $('html,body').animate({ scrollTop: '0px' }, 800); });
    $(window).scroll(function (event) {
        if ($.browser.ie6) {
            $('#gotop').css('top', $(this).scrollTop() + $(this).height() - 170);
        }
        if ($(this).scrollTop() > 260) {
            $('#gotop').fadeIn();
        } else {
            $('#gotop').fadeOut();
        }
    });
});