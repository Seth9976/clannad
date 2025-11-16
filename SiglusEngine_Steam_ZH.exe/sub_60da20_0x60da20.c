// 函数: sub_60da20
// 地址: 0x60da20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be8e2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_54 = 0
char var_53
_memset(&var_53, 0, 0x3f)
char var_94 = 0
char var_93
_memset(&var_93, 0, 0x3f)
char var_d4 = 0
char var_d3[0x3f]
_memset(&var_d3, 0, 0x3f)
char* result = data_bac508

if (result[0x41] == 0)
    HMODULE eax_3 = LoadLibraryW(u"SiglusDebugger3.dll")
    *arg1 = eax_3
    int32_t var_104
    int32_t var_f0
    
    if (eax_3 == 0)
        int16_t* eax_4 = sub_532b80(eax_3, data_bac4d8 + 0x30, &var_104, &data_ad900c)
        int32_t var_8_1 = 0
        int32_t* lpLibFileName_1
        sub_532b80(eax_4, eax_4, &lpLibFileName_1, u"SiglusDebugger3.dll")
        int32_t var_8_2 = 0xffffffff
        
        if (var_f0 u>= 8)
            j__free(var_104)
        
        int32_t* lpLibFileName = &lpLibFileName_1
        int32_t var_108
        
        if (var_108 u>= 8)
            lpLibFileName = lpLibFileName_1
        
        *arg1 = LoadLibraryW(lpLibFileName)
        
        if (var_108 u>= 8)
            j__free(lpLibFileName_1)
        
        int32_t var_108_1 = 7
        int32_t var_10c_1 = 0
        lpLibFileName_1.w = 0
    
    if (eax_3 != 0 || *arg1 != 0)
        int32_t eax_6 = GetProcAddress(*arg1, "get_major_version")
        struct HINSTANCE__* hModule = *arg1
        arg1[1] = eax_6
        int32_t eax_7 = GetProcAddress(hModule, "get_minor_version")
        struct HINSTANCE__* hModule_1 = *arg1
        arg1[2] = eax_7
        int32_t eax_8 = GetProcAddress(hModule_1, "lb_add_item_001")
        struct HINSTANCE__* hModule_2 = *arg1
        arg1[3] = eax_8
        int32_t eax_9 = GetProcAddress(hModule_2, "lb_insert_item_001")
        struct HINSTANCE__* hModule_3 = *arg1
        arg1[4] = eax_9
        int32_t eax_10 = GetProcAddress(hModule_3, "lv_add_item_001")
        struct HINSTANCE__* hModule_4 = *arg1
        arg1[5] = eax_10
        int32_t eax_11 = GetProcAddress(hModule_4, "lv_add_item_002")
        struct HINSTANCE__* hModule_5 = *arg1
        arg1[6] = eax_11
        int32_t eax_12 = GetProcAddress(hModule_5, "lv_add_item_visible_001")
        struct HINSTANCE__* hModule_6 = *arg1
        arg1[7] = eax_12
        int32_t eax_13 = GetProcAddress(hModule_6, "lv_insert_item_001")
        struct HINSTANCE__* hModule_7 = *arg1
        arg1[8] = eax_13
        int32_t eax_14 = GetProcAddress(hModule_7, "lv_insert_item_002")
        struct HINSTANCE__* hModule_8 = *arg1
        arg1[9] = eax_14
        int32_t eax_15 = GetProcAddress(hModule_8, "lv_insert_item_visible_001")
        struct HINSTANCE__* hModule_9 = *arg1
        arg1[0xa] = eax_15
        int32_t eax_16 = GetProcAddress(hModule_9, "lv_reduce_item_001")
        struct HINSTANCE__* hModule_10 = *arg1
        arg1[0xb] = eax_16
        int32_t eax_17 = GetProcAddress(hModule_10, "lv_set_item_cnt_001")
        struct HINSTANCE__* hModule_11 = *arg1
        arg1[0xc] = eax_17
        int32_t eax_18 = GetProcAddress(hModule_11, "lv_set_cell_text_001")
        struct HINSTANCE__* hModule_12 = *arg1
        arg1[0xd] = eax_18
        int32_t eax_19 = GetProcAddress(hModule_12, "lv_set_cell_text_visible_001")
        int32_t ecx_2 = arg1[1]
        arg1[0xe] = eax_19
        int16_t var_ec
        
        if (ecx_2 == 0 || arg1[2] == 0 || arg1[3] == 0 || arg1[4] == 0 || arg1[5] == 0
                || arg1[6] == 0 || arg1[7] == 0 || arg1[8] == 0 || arg1[9] == 0 || arg1[0xa] == 0
                || arg1[0xb] == 0 || arg1[0xc] == 0 || arg1[0xd] == 0 || eax_19 == 0)
            int32_t var_d8_3 = 7
            int32_t var_dc_3 = 0
            var_ec = 0
            sub_52e720(&var_ec, u"debug.dll", 0x1d)
            int32_t var_8_9 = 1
            sub_684160(data_bac424, 3, &var_ec)
            int32_t var_8_10 = 0xffffffff
            
            if (var_d8_3 u>= 8)
                j__free(var_ec.d)
            
            sub_60dfd0(arg1)
        else
            int32_t eax_20 = ecx_2(&var_54, eax_2)
            char* var_14c_2 = &var_d4
            
            if (sub_60d6b0(&var_d4, &var_94, &var_54, arg1[2](&var_94)) == 0)
                int16_t* eax_23 = sub_6b9ed0(&var_ec)
                int32_t var_8_3 = 2
                int16_t* eax_24 = sub_548cb0(eax_23, u"debug.dll", &var_104, eax_23)
                var_8_3.b = 3
                sub_684160(data_bac424, 2, eax_24)
                sub_52e8a0(&var_104)
                int32_t var_8_4 = 0xffffffff
                sub_52e8a0(&var_ec)
                sub_60dfd0(arg1)
            else if (eax_20 != 3)
            label_60ddc6:
                int32_t var_d8_2 = 7
                int32_t var_dc_2 = 0
                var_ec = 0
                sub_52e720(&var_ec, u"debug.dll", 0x16)
                int32_t var_8_7 = 5
                sub_684160(data_bac424, 2, &var_ec)
                int32_t var_8_8 = 0xffffffff
                sub_52e8a0(&var_ec)
                sub_60dfd0(arg1)
            else
                void* ecx_11 = &data_b5b428
                char* edx_5 = &var_d4
                int32_t i_1 = 0x3c
                int32_t i
                
                do
                    if (*ecx_11 != *edx_5)
                        goto label_60ddc6
                    
                    ecx_11 += 4
                    edx_5 = &edx_5[4]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
                int32_t var_d8_1 = 7
                *data_bac4a0 = 1
                int32_t var_dc_1 = 0
                var_ec = 0
                sub_52e720(&var_ec, u"debug.dll", 0x13)
                int32_t var_8_5 = 4
                sub_684160(data_bac424, 5, &var_ec)
                int32_t var_8_6 = 0xffffffff
                sub_52e8a0(&var_ec)
    
    result = data_bac4a0
    
    if (*result == 0 && *(data_bac508 + 0x40) != 0)
        char* eax_27 = sub_6af1a0(&var_104)
        
        if (*(eax_27 + 0x14) u>= 0x10)
            eax_27 = *eax_27
        
        var_54.o = *eax_27
        int128_t var_44_1 = *(eax_27 + 0x10)
        
        if (var_f0 u>= 0x10)
            j__free(var_104)
        
        data_bac508
        int32_t var_f0_1 = 0xf
        int32_t var_f4_1 = 0
        var_104.b = 0
        char var_134
        char* eax_28
        int32_t* ecx_23
        eax_28, ecx_23 = sub_6af1a0(&var_134)
        
        if (*(eax_28 + 0x14) u>= 0x10)
            eax_28 = *eax_28
        
        var_94.o = *eax_28
        int128_t var_84_1 = *(eax_28 + 0x10)
        int32_t var_120
        
        if (var_120 u>= 0x10)
            ecx_23 = j__free(var_134.d)
        
        int32_t* var_148_14 = ecx_23
        int32_t var_120_1 = 0xf
        char* var_14c_3 = &var_d4
        int32_t var_124_1 = 0
        var_134 = 0
        sub_60d6b0(&var_d4, &var_94, &var_54, ecx_23)
        int32_t* edx_11 = &var_d4
        char** ecx_25 = &data_b5b428
        int32_t esi_2 = 0x3c
        
        while (true)
            result = *ecx_25
            
            if (result != *edx_11)
                break
            
            ecx_25 = &ecx_25[1]
            edx_11 = &edx_11[1]
            int32_t temp0_1 = esi_2
            esi_2 -= 4
            
            if (temp0_1 u< 4)
                result = data_bac4a0
                *result = 1
                break

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
