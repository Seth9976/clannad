// 函数: sub_4d7fe0
// 地址: 0x4d7fe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[0x40]
int32_t edi
int32_t var_1c = edi
char const* const var_20_1

if ((*(arg1 + 0x6e) & 0x40) != 0)
    int32_t edi_1 = *(eax + 4)
    int32_t edx_1 = 0
    
    if (edi_1 u> 0)
        int32_t* ecx = *(eax + 8)
        
        do
            if (*(*(arg1[5] + (*ecx << 2)) + 0x10) != edx_1)
                var_20_1 = "cannot clip from a swizzled vector"
                goto label_4d811a
            
            edi_1 = *(eax + 4)
            edx_1 += 1
            ecx = &ecx[1]
        while (edx_1 u< edi_1)
    
    if (edi_1 == 3)
        goto label_4d804e
    
    var_20_1 = "clip must be performed from a float3 vector for ps_1_x models"
    goto label_4d811a

if (*(eax + 4) != 4)
    var_20_1 = "clip must be performed from a float4 vector for ps_2_0 models"
label_4d811a:
    int32_t var_24_4 = 0x1194
    sub_4a4100(arg1, *(eax + 0x3c), 0x1194, var_20_1)
    return 0x80004005

label_4d804e:
void* edx_3 = *(arg1[5] + (**(eax + 8) << 2))
int32_t ecx_3 = *(edx_3 + 4)
int32_t eax_3
int32_t ecx_5
int32_t var_c
int32_t var_8

if (ecx_3 != arg1[0x20])
    if (ecx_3 != arg1[0x22])
        var_20_1 = "clip cannot be performed from a constant or literal"
        goto label_4d811a
    
    ecx_5 = 0
    var_8 = 0
    eax_3 = *(edx_3 + 0xc)
    var_c = eax_3
else
    if ((*(*arg1 + 0x88))(edx_3, &var_c, &var_8) s< 0)
        int32_t var_24_2 = 0x1194
        sub_4a4100(arg1, nullptr, 0x1194, "internal error: unexpected input register type")
        return 0x80004005
    
    ecx_5 = var_8
    eax_3 = var_c
int32_t result = sub_4d7429(arg1, 0x41)

if (result s>= 0)
    int32_t var_10
    result = (*(*arg1 + 0x7c))(*(arg1[5] + (**(arg1[0x40] + 0x10) << 2)), &var_10)
    
    if (result s>= 0)
        result = (*(*arg1 + 0x64))(
            ((ecx_5 | 0xfffffff8) << 0x14 | (ecx_5 & 0x18)) << 8 | (eax_3 & 0x7ff), 0xf0000, var_10)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x60))()
            
            if (result s>= 0)
                result = sub_4d25aa(arg1)
                
                if (result s>= 0)
                    return 0

return result
