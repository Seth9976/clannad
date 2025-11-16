// 函数: sub_5c4f70
// 地址: 0x5c4f70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
void* esi = arg2

if (arg1 == 0 || esi == 0)
    return 0x80070057

int32_t** eax = arg4

if (eax == 0)
    return 0x80004003

int32_t edi
int32_t var_10 = edi

if (*arg3 == 0 && arg3[1] == 0 && arg3[2] == 0xc0 && arg3[3] == 0x46000000)
    int32_t* esi_2 = *(esi + 4) + arg1
    (*(*esi_2 + 4))(esi_2)
    *arg4 = esi_2
    return 0

int32_t i = *(esi + 8)
int32_t result

while (i != 0)
    int32_t* ecx_1 = *esi
    int32_t ebx_1
    ebx_1.b = ecx_1 == 0
    
    if (ebx_1 != 0)
        goto label_5c500e
    
    if (*ecx_1 == *arg3 && ecx_1[1] == arg3[1] && ecx_1[2] == arg3[2] && ecx_1[3] == arg3[3])
        eax = arg4
    label_5c500e:
        
        if (i == 1)
            int32_t* esi_5 = *(esi + 4) + arg1
            (*(*esi_5 + 4))(esi_5)
            *arg4 = esi_5
            return 0
        
        result = i(arg1, arg3, eax, *(esi + 4))
        
        if (result == 0)
            return 0
        
        if (ebx_1 == 0 && result s< 0)
            goto label_5c5041
    
    i = *(esi + 0x14)
    esi += 0xc
    eax = arg4

result = 0x80004002
label_5c5041:
*arg4 = nullptr
return result
