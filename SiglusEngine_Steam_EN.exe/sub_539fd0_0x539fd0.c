// 函数: sub_539fd0
// 地址: 0x539fd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_3 = data_1bfdd30 - 0x6a4

switch (eax_3)
    case 0
        HWND eax_5 = sub_41dfa0(
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$", &data_1b8a720), 
            data_1b8a734, data_1b8a720, data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
            data_1b8a798, data_1b8a7ac, data_1b8a7c0, data_1b8a7d4, data_1b8a7e8, data_1b8a7fc)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_5
    case 1
        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_6 = sub_41e520(data_1b8a720, 1)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_6
    case 2
        int32_t eax_7 = sub_41e600()
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_7
    case 3
        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        HWND eax_8 = sub_41e930(data_1b8a720)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_8
    case 0xa
        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
        int32_t eax_9 = sub_41e880(data_1b8a720, data_1b8a73c)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_9
    case 0xb
        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
        uint32_t eax_10 = 0x101
        
        if (data_1b8a740 == 0xa)
            eax_10 = 0x3f
        
        char var_114[0x10c]
        int32_t eax_12 = sub_4a4620(sub_41e8e0(eax_10, &var_114, data_1b8a720, eax_10), &var_114, 
            data_1b8a744, data_1b8a740)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_12
    case 0xc
        eax_3 = data_f89aec
    label_53a191:
        bool cond:1_1 = data_1af174c != 0
        data_715e98 = eax_3
        
        if (cond:1_1)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
        
        data_71929c = 1
        data_7192a0 = 0
        data_7192e0 = 0
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_3
    case 0xd
        eax_3 = data_f89af0
        goto label_53a191
    case 0xe
        eax_3 = data_f89af4
        goto label_53a191
    case 0xf
        eax_3 = data_f89af8
        goto label_53a191
    default
        data_1b8b06c = 1
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_3
