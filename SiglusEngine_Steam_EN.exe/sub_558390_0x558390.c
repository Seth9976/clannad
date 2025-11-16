// 函数: sub_558390
// 地址: 0x558390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
BOOL var_218 = 0
int32_t var_214 = 0
void var_210
int32_t eax_2 = sub_48e820(arg1, &var_210)
char* result

if (eax_2 == 1)
    result = sub_4c4810(&var_218, &var_214, &var_210, &var_218, "SEEN_DATA", 0xffffffff, 0xffffffff)
label_55842c:
    BOOL esi_1 = var_218
    
    if (esi_1 != 0)
        int32_t eax_10
        int32_t edx_3
        edx_3:eax_10 = sx.q(*(esi_1 + 4))
        result = divs.dp.d(edx_3:eax_10, 0x64)
        
        if (mods.dp.d(edx_3:eax_10, 0x64) == 2)
            int32_t* edx_5 = esi_1 + 0x38
            int32_t edi_1 = *(esi_1 + 0x34)
            *((data_20c3878 << 2) + &data_20c36e8) = 0
            result = 1
            data_20c3878 = 1
            
            for (int32_t i = 1; i s< 0x64; )
                if (edi_1 != *edx_5)
                    *((result << 2) + &data_20c36e8) = i
                    result = &result[1]
                
                i += 1
                edx_5 = &edx_5[1]
            
            bool cond:0_1 = var_214 == 0
            data_20c3878 = result
            
            if (not(cond:0_1))
                result = sub_4d6c40(&var_214, &var_218)
else
    result = eax_2 - 2
    
    if (eax_2 == 2)
        int32_t eax_4 = data_1b8be84
        result = sub_4c4a00(&var_218, &var_214, &var_210, &var_218, "SEEN_DATA", 
            *(eax_4 + (arg1 << 3)) + data_1af44c8, *(eax_4 + (arg1 << 3) + 4), 0xffffffff, 
            0xffffffff)
        goto label_55842c

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
