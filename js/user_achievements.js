(function ($) {
    Drupal.behaviors.userPoints = {
        attach: function (context, settings) {
            $('.see-points', context).once('userPoints', function () {
                $('.user-achievements').hide();
                $(this, context).click(function (e) {
                    $('.user-achievements').toggle();
                });
            });
        }
    };
})(jQuery);