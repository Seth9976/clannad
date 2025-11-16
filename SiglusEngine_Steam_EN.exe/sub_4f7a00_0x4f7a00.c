// 函数: sub_4f7a00
// 地址: 0x4f7a00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_6c = 0
void* var_68 = 0xffffffff
int32_t var_2e4
int32_t eax_2 = sub_4d1ba0(eax_1, 0x2d4, &var_2e4, 0)
int32_t esi = data_1bfdd30
int32_t var_c4 = 0xffffffff
int32_t var_84 = 0xff

if (esi s> 0x47)
    eax_2 = esi - 0x41a
    
    if (eax_2 u> 1)
        data_1b8b06c = 1
    else
    label_4f7a8c:
        int32_t eax_3 = data_1af4e84
        int32_t var_2e8_1
        int32_t var_1c0
        int32_t var_1bc
        int32_t ecx_11
        void* edx_10
        void* ebx_1
        int32_t edi_1
        void* var_1ec
        int32_t var_1e8
        void* var_1e4
        int32_t var_1e0
        
        if (eax_3 u> 3)
            int32_t var_1c4
            var_2e8_1 = var_1c4
            eax_2 = 0xff
        label_4f7ced:
            ebx_1 = var_1ec
            edi_1 = var_1e8
            edx_10 = var_1e4
            ecx_11 = var_1e0
        else
            switch (eax_3)
                case 0
                    sub_542740(sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720), 
                        &var_68, data_1b8a728, 3, 0)
                    int32_t* var_308_1 = &var_1bc
                    sub_4efb40(&var_1e8, &var_1ec, data_1b8a728, &var_1e8, &var_1e4, &var_1e0, 
                        &var_1c0)
                    int32_t eax_6 = data_1b8a734
                    var_2e8_1 = eax_6
                    int32_t var_1c4_1 = eax_6
                    eax_2 = 0xff
                    int32_t var_84_1 = 0xff
                label_4f7b18:
                    esi = data_1bfdd30
                    var_6c = 1
                    goto label_4f7ced
                case 1
                    sub_542740(
                        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720), 
                        &var_68, data_1b8a728, 3, 0)
                    int32_t* var_308_2 = &var_1bc
                    sub_4efb40(&var_1e8, &var_1ec, data_1b8a728, &var_1e8, &var_1e4, &var_1e0, 
                        &var_1c0)
                    int32_t eax_9 = data_1b8a734
                    var_2e8_1 = eax_9
                    int32_t var_1c4_2 = eax_9
                    eax_2 = data_1b8a748
                    int32_t var_84_2 = eax_2
                    
                    if (eax_2 s<= 0 || eax_2 s>= 0xff)
                        goto label_4f7b18
                    
                    esi = data_1bfdd30
                    goto label_4f7ced
                case 2
                    sub_542740(
                        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$$$", &data_1b8a720), 
                        &var_68, data_1b8a728, 3, 0)
                    int32_t eax_11 = data_1b8a734
                    var_2e8_1 = eax_11
                    int32_t var_1c4_3 = eax_11
                    var_1c0 = data_1b8a798
                    var_1bc = data_1b8a7ac
                    eax_2 = 0xff
                case 3
                    sub_542740(
                        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$$$$", &data_1b8a720), 
                        &var_68, data_1b8a728, 3, 0)
                    int32_t eax_15 = data_1b8a734
                    var_2e8_1 = eax_15
                    int32_t var_1c4_4 = eax_15
                    var_1c0 = data_1b8a798
                    var_1bc = data_1b8a7ac
                    eax_2 = data_1b8a7c0
            
            esi = data_1bfdd30
            ecx_11 = data_1b8a784
            edx_10 = data_1b8a770
            edi_1 = data_1b8a75c
            ebx_1 = data_1b8a748
            var_1e0 = ecx_11
            var_1e4 = edx_10
            var_1e8 = edi_1
            var_1ec = ebx_1
            int32_t var_84_3 = eax_2
            
            if (esi s>= 0x3e8)
                if (edx_10 == 0)
                    edx_10 = ebx_1
                else
                    edx_10 = edx_10 - 1 + ebx_1
                
                var_1e4 = edx_10
                
                if (ecx_11 == 0)
                    ecx_11 = edi_1
                    var_1e0 = ecx_11
                else
                    ecx_11 = ecx_11 - 1 + edi_1
                    var_1e0 = ecx_11
        
        if (data_1b8b06c == 0 && var_2e8_1 u<= 0xf)
            if (esi == 0x32 || esi == 0x46 || esi == 0x41a)
                void* var_2f8 = var_68
                
                if (var_6c == 0)
                    sub_412680(eax_2, data_1b8a728, var_2e8_1, ebx_1, edi_1, edx_10, ecx_11, 
                        var_1c0, var_1bc, eax_2, 0, var_2f8)
                else
                    sub_4122f0(eax_2, data_1b8a728, var_2e8_1, var_2f8)
            else
                sub_412680(eax_2, data_1b8a728, var_2e8_1, ebx_1, edi_1, edx_10, ecx_11, var_1c0, 
                    var_1bc, eax_2, 1, var_68)
            
            int32_t eax_19 = data_1bfdd30
            char* edx_14 = data_1b8a728
            var_2e4 = eax_19
            char var_2e0[0xf4]
            sub_4cfdf0(eax_19, edx_14, &var_2e0, 0x24)
            LRESULT eax_20 = sub_42a6d0(&var_2e4)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_20
else
    if (esi s>= 0x46 || (esi s>= 0x32 && esi s<= 0x33))
        goto label_4f7a8c
    
    data_1b8b06c = 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2
