// 函数: sub_418b90
// 地址: 0x418b90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg5
int32_t edx = 0xffffffff
int32_t* var_8 = arg3
arg3[3] = 0
int32_t var_c = 0xffffffff
*arg3 = 0
void* ebx_1 = arg2

do
    int32_t eax = 0
    
    if (esi s> 0)
        int32_t* edx_1 = ebx_1 + 4
        
        do
            if (*edx_1 != *(arg6 + (eax << 2)))
                goto label_418c04
            
            eax += 1
            edx_1 = &edx_1[1]
        while (eax s< esi)
        
        arg3 = var_8
        edx = var_c
    
    int32_t eax_1 = *(ebx_1 + (esi << 2) + 4)
    
    if (edx != eax_1 || esi == 4)
        *arg3 += 1
        edx = eax_1
        var_c = edx
    
    ebx_1 += 0x2c
while (ebx_1 != arg4)

label_418c04:
int32_t result = *var_8

if (result s> 0)
    int32_t eax_2 = result << 4
    sub_4d6960(eax_2, &var_8[2], &var_8[1], eax_2, "CGTABLE_CODE_GROUPE")
    void* eax_3 = var_8[2]
    int32_t i = 0
    
    if (*var_8 s> 0)
        do
            *(eax_3 + 4) = 0
            eax_3 += 0x10
            *(eax_3 - 8) = 0
            i += 1
            *(eax_3 - 0x10) = 0
            *(eax_3 - 4) = 0
        while (i s< *var_8)
    
    void* ebx_3 = arg2
    int32_t result_1 = 0
    int32_t edx_3 = 0xffffffff
    arg5 = 0xffffffff
    var_8[3] = *(arg7 + 8) + *ebx_3 * 0x3c
    void* var_8_1 = var_8[2]
    
    do
        int32_t ecx_6 = 0
        
        if (esi s> 0)
            void* edx_4 = ebx_3 + 4
            
            do
                result = *edx_4
                
                if (result != *(arg6 + (ecx_6 << 2)))
                    return result
                
                ecx_6 += 1
                edx_4 += 4
            while (ecx_6 s< esi)
            
            edx_3 = arg5
        
        int32_t eax_8 = *(ebx_3 + (esi << 2) + 4)
        
        if (edx_3 != eax_8 || esi == 4)
            if (edx_3 != 0xffffffff)
                result_1 += 1
            
            edx_3 = eax_8
            arg5 = edx_3
            
            if (esi + 1 s< 5)
                *(arg6 + (esi << 2)) = edx_3
                sub_418b90(arg4, esi + 1, arg6, arg7)
                edx_3 = arg5
            
            *(var_8_1 + 0xc) = *(arg7 + 8) + *ebx_3 * 0x3c
            var_8_1 += 0x10
        
        result = result_1
        *(ebx_3 + (esi << 2) + 0x18) = result
        ebx_3 += 0x2c
    while (ebx_3 != arg4)

return result
