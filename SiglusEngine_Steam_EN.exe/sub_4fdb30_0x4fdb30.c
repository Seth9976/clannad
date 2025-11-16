// 函数: sub_4fdb30
// 地址: 0x4fdb30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edx = 0
char var_2c[0x24]
var_2c[0] = 0
uint32_t eax_3 = data_1bfdd30 - 0xa
uint32_t var_30 = 0
int32_t esi = 0xffffffff
int32_t edi = 0
int32_t ebx = 0

if (eax_3 u> 0xb)
    data_1b8b06c = 1
else
    eax_3 = zx.d(lookup_table_4fddec[eax_3])
    int32_t ecx_2
    
    switch (eax_3)
        case 0
            eax_3 = data_1af4e84
            
            if (eax_3 u> 3)
                goto label_4fdba3
            
            switch (eax_3)
                case 0
                    eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                    edx = data_1b8a720
                label_4fdba3:
                    ecx_2 = 0
                label_4fdba5:
                    
                    if (data_1b8b06c == 0)
                        int32_t eax_4 = data_1bfdd30
                        int32_t var_44
                        int32_t var_40
                        
                        if (eax_4 == 0xa || eax_4 == 0x14)
                            var_40 = 0
                            var_44 = 1
                        else
                            var_40 = 1
                            var_44 = 0
                        
                        void* eax_5 = sub_4fd080(eax_4, edx, &var_2c, esi, edi, ebx, ecx_2, var_30, 
                            var_44, var_40)
                        sub_5f02dd(eax_1 ^ &__saved_ebp)
                        return eax_5
                case 1
                    eax_3 = sub_4cfdf0(
                        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720), 
                        data_1b8a728, &var_2c, 0x24)
                    edx = data_1b8a734
                    goto label_4fdba3
                case 2
                    eax_3 = sub_4cfdf0(
                        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$$$", &data_1b8a720), 
                        data_1b8a728, &var_2c, 0x24)
                    edx = data_1b8a734
                    edi = data_1b8a748
                    ebx = data_1b8a75c
                    goto label_4fdba3
                case 3
                    sub_4cfdf0(
                        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$", &data_1b8a720), 
                        data_1b8a728, &var_2c, 0x24)
                    eax_3 = data_1b8a784
                    edx = data_1b8a734
                    edi = data_1b8a748
                    ebx = data_1b8a75c
                    ecx_2 = data_1b8a770
                    var_30 = eax_3
                    goto label_4fdba5
        case 1
            eax_3 = data_1af4e84
            
            if (eax_3 u> 3)
                goto label_4fdba3
            
            switch (eax_3)
                case 0
                    eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    edx = data_1b8a720
                    esi = data_1b8a734
                    goto label_4fdba3
                case 1
                    eax_3 = sub_4cfdf0(
                        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720), 
                        data_1b8a728, &var_2c, 0x24)
                    edx = data_1b8a734
                    esi = data_1b8a748
                    goto label_4fdba3
                case 2
                    eax_3 = sub_4cfdf0(
                        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$$$$", &data_1b8a720), 
                        data_1b8a728, &var_2c, 0x24)
                    edx = data_1b8a734
                    esi = data_1b8a748
                    edi = data_1b8a75c
                    ebx = data_1b8a770
                    goto label_4fdba3
                case 3
                    sub_4cfdf0(
                        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$$", &data_1b8a720), 
                        data_1b8a728, &var_2c, 0x24)
                    eax_3 = data_1b8a798
                    edx = data_1b8a734
                    esi = data_1b8a748
                    edi = data_1b8a75c
                    ebx = data_1b8a770
                    ecx_2 = data_1b8a784
                    var_30 = eax_3
                    goto label_4fdba5
        case 2
            data_1b8b06c = 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_3
