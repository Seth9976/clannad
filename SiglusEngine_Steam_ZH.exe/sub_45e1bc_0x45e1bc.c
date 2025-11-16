// 函数: sub_45e1bc
// 地址: 0x45e1bc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t ecx = zx.d(*(arg1 + 0x5c))

if (arg2 u< ecx)
    arg2 = ecx

uint32_t ecx_1 = zx.d(*(arg1 + 0x5e))
uint32_t eax_1 = arg3

if (eax_1 u> ecx_1)
    eax_1 = ecx_1

if (data_b95af8 == 0 && eax_1 u> 0xff)
    eax_1 = 0xff

if (arg2 u> eax_1)
    return 0

uint32_t ebx_1 = (eax_1 - arg2 + 1) * 2
uint32_t eax_5 = sub_745f3f(ebx_1)

if (eax_5 == 0)
    return 0x8007000e

int32_t edi
int32_t var_34_2 = edi
int32_t results
__builtin_memset(&results, 0, 0x24)
int32_t result = 0
bool cond:1_1 = data_b95af8 == 0
results = 0x24
wchar16* lpString

if (cond:1_1)
    lpString = sub_745f3f(eax_1 - arg2 + 1)
    
    if (lpString == 0)
        result = 0x8007000e
    else
        char* i = nullptr
        
        if (eax_1 - arg2 + 1 u> 0)
            do
                *(i + lpString) = arg2.b + i.b
                i = &i[1]
            while (i u< eax_1 - arg2 + 1)
        
        GetCharacterPlacementA(*(arg1 + 0x10), lpString, eax_1 - arg2 + 1, 0, &results, 0)
    label_45e2ba:
        j__free(lpString)
        int32_t result_1 = sub_45c417(arg1, eax_5, eax_1 - arg2 + 1, 0)
        
        if (result_1 s< 0)
            result = result_1
else
    lpString = sub_745f3f(ebx_1)
    
    if (lpString != 0)
        int32_t i_1 = 0
        
        if (eax_1 - arg2 + 1 u> 0)
            do
                lpString[i_1] = arg2.w + i_1.w
                i_1 += 1
            while (i_1 u< eax_1 - arg2 + 1)
        
        GetCharacterPlacementW(*(arg1 + 0x10), lpString, eax_1 - arg2 + 1, 0, &results, 0)
        goto label_45e2ba
    
    result = 0x8007000e
j__free(eax_5)
return result
