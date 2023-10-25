void leader_start_user(void) {
    // switch to unicode input layout
    tap_code16(LALT(KC_SPC));
}

void leader_end_user(void) {

    bool leader_succeded = true;
    // symbols

    if (leader_sequence_three_keys(KC_S, KC_T, KC_M)) { // trademark
        register_unicode(0x2122); // ™
    } else if (leader_sequence_two_keys(KC_S, KC_C)) { // copyright
        register_unicode(0x00A9); // ©
    } else if (leader_sequence_two_keys(KC_S, KC_R)) { // registered trademark
        register_unicode(0x00AE); // ®

    // } // emoticons
    // else if (leader_sequence_two_keys(KC_E, KC_S)) { // shrug ¯\_(ツ)_/¯
    //     send_unicode_string("¯\\_(ツ)_/¯");
        // register_unicode(0x00AF);
        // register_unicode(0x005C);
        // register_unicode(0x005F);
        // register_unicode(0x0028);
        // register_unicode(0x30C4);
        // register_unicode(0x0029);
        // register_unicode(0x005F);
        // register_unicode(0x002F);
        // register_unicode(0x00AF);
        // register_unicode(0x00AF);

    // } else if (leader_sequence_three_keys(KC_E, KC_L, KC_F)) { // lenny face
    //     send_unicode_string("( ͡° ͜ʖ ͡°)");
    // } else if (leader_sequence_three_keys(KC_E, KC_T, KC_F)) { //table flip
    //     send_unicode_string("(╯°□°）╯︵ ┻━┻");
    } else if (leader_sequence_three_keys(KC_E, KC_F, KC_T)) { // flip table
        send_unicode_string("(╯‵Д′)╯彡┻━┻");
    // } else if (leader_sequence_two_keys(KC_E, KC_D)) { // disapproval
    //     send_unicode_string("ಠ_ಠ");
    } // vim
    else if (leader_sequence_two_keys(KC_V, KC_R)) { // replace
        SEND_STRING(";%s///g");
        tap_code(KC_LEFT);
        tap_code(KC_LEFT);
        tap_code(KC_LEFT);
    } // screenshot
    else if (leader_sequence_two_keys(KC_S, KC_S)) { // Selective Screen Shot
        SEND_STRING(SS_LGUI(SS_LSFT("4")));
    }
    else if (leader_sequence_two_keys(KC_S, KC_A)) { // all screen
        SEND_STRING(SS_LGUI(SS_LSFT("3")));
    } // web
    else if (leader_sequence_two_keys(KC_SCLN, KC_Y)) { // youtube
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tabopen youtube.com\n");
        // SEND_STRING(":tabopen youtube.com\n");
        send_string_with_delay(":tabopen videos.sahinakkaya.dev\n", 5);
    }
    else if (leader_sequence_two_keys(KC_SCLN, KC_S)) { // twitch
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tabopen twitch.tv\n");
        // SEND_STRING(":tabopen twitch.tv\n");
        send_string_with_delay(":tabopen twitch.tv\n", 5);
    }
    else if (leader_sequence_two_keys(KC_SCLN, KC_W)) { // whatsapp
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tabopen web.whatsapp.com\n");
        // SEND_STRING(":tabopen web.whatsapp.com\n");
        send_string_with_delay(":tabopen web.whatsapp.com\n", 5);
    }
    else if (leader_sequence_two_keys(KC_SCLN, KC_L)) { // lichess
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tabopen lichess.org\n");
        // SEND_STRING(":tabopen lichess.org\n");
        send_string_with_delay(":tabopen lichess.org\n", 5);
    }
    else if (leader_sequence_two_keys(KC_SCLN, KC_C)) { // Chat GPT
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tabopen chat.openai.com\n");
        // SEND_STRING(":tabopen chat.openai.com\n");
        send_string_with_delay(":tabopen chat.openai.com\n", 5);
    }
    else if (leader_sequence_two_keys(KC_SCLN, KC_G)) { // Github
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tabopen github.com\n");
        // SEND_STRING(":tabopen github.com\n");
        send_string_with_delay(":tabopen github.com\n", 5);
    }
    else if (leader_sequence_two_keys(KC_SCLN, KC_R)) { // Reddit
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tabopen reddit.com\n");
        // SEND_STRING(":tabopen reddit.com\n");
        send_string_with_delay(":tabopen reddit.com\n", 5);
    }
    else if (leader_sequence_two_keys(KC_SCLN, KC_E)) { // eksi
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tabopen eksisozluk1923.com\n");
        // SEND_STRING(":tabopen eksisozluk1923.com\n");
        send_string_with_delay(":tabopen eksisozluk1923.com\n", 5);
    }
    else if (leader_sequence_three_keys(KC_SCLN, KC_T, KC_T)) { // telegram
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tabopen web.telegram.org\n");
        // SEND_STRING(":tabopen web.telegram.org\n");
        send_string_with_delay(":tabopen web.telegram.org\n", 5);
    }
    else if (leader_sequence_three_keys(KC_SCLN, KC_T, KC_R)) { // translate
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tabopen translate.google.com.tr\n");
        // SEND_STRING(":tabopen translate.google.com.tr\n");
        send_string_with_delay(":tabopen translate.google.com.tr\n", 5);
    }
    else if (leader_sequence_two_keys(KC_SCLN, KC_X)) { // thttp://itorrents.org/torrent/2302ECAB74207E7831055400563A61AA23025FE5.torrentwitter
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tabopen twitter.com\n");
        // SEND_STRING(":tabopen twitter.com\n");
        send_string_with_delay(":tabopen twitter.com\n", 5);
    } // go to tab
    else if (leader_sequence_two_keys(KC_J, KC_T)) { // telegram
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) "b web.telegram.org\n");
        // SEND_STRING("b web.telegram.org\n");
        send_string_with_delay("b web.telegram.org\n", 5);
    }
    else if (leader_sequence_two_keys(KC_J, KC_Y)) { // youtube
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) "b youtube.com\n");
        // SEND_STRING("b youtube.com\n");
        send_string_with_delay("b videos.sahinakkaya.dev\n", 5);
    }
    else if (leader_sequence_two_keys(KC_J, KC_W)) { // whatsapp
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) "b web.whatsapp.com\n");
        // SEND_STRING("b web.whatsapp.com\n");
        send_string_with_delay("b web.whatsapp.com\n", 5);
    }
    else if (leader_sequence_three_keys(KC_J, KC_T, KC_R)) { // translate
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) "b translate.google.com\n");
        // SEND_STRING("b translate.google.com\n");
        send_string_with_delay("b translate.google.com\n", 5);
    }
    else if (leader_sequence_two_keys(KC_J, KC_G)) { // github
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) "b github.com\n");
        // SEND_STRING("b github.com\n");
        send_string_with_delay("b github.com\n", 5);
    }
    else if (leader_sequence_two_keys(KC_J, KC_R)) { // reddit
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) "b reddit.com\n");
        // SEND_STRING("b reddit.com\n");
        send_string_with_delay("b reddit.com\n", 5);
    }
    // make a macro for going to project
    // general
    else if (leader_sequence_two_keys(KC_Y, KC_Y)) { // copy whole thing
        tap_code16(LCTL(KC_A));
        tap_code16(LCTL(KC_C));
    }
    else if (leader_sequence_one_key(KC_L)) { // next tab
        tap_code16(LCTL(KC_TAB));
    }
    else if (leader_sequence_one_key(KC_H)) { // previous tab
        tap_code16(LCTL(LSFT(KC_TAB)));
    }
    else if (leader_sequence_one_key(KC_SPC)) { // last tab
        // tap_code16(LCTL(KC_COMM));
        // SEND_STRING(SS_DELAY(100) ":tab #\n");
        // SEND_STRING(":tab #\n");
        send_string_with_delay(":tab #\n", 15);
    }
    else {
        leader_succeded = false;
    }
    if (leader_succeded) {
        uprintf("yihuu\n");
    } else {
        uprintf("fuck\n");
    }
    tap_code16(LALT(KC_SPC));
}
