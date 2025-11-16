// 函数: sub_4fb730
// 地址: 0x4fb730
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t eax = data_1bfdd30

if (eax != 0x3e8)
    if (eax == 0x3e9)
        sub_4ef190(eax - 0x3e9, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_427990(data_1b8a720)
    
    if (eax == 0x3ea)
        return sub_427a10()
    
    data_1b8b06c = 1
    return eax - 0x3ea

char** eax_6 = sub_4ef190(eax - 0x3e8, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
char* edx_2 = data_1b8a73c
int32_t* ecx_5 = 0xffffffff
char* esi = edx_2
var_8 = 0xffffffff

if (esi != 0 && *esi != 0)
    while (true)
        eax_6.b = *esi
        
        if (eax_6.b u< 0x80)
        label_4fb7d7:
            
            if (eax_6.b == 0x3f)
                eax_6 = sub_542610(&esi[1], &var_8)
                ecx_5 = var_8
                *esi = 0
                edx_2 = data_1b8a73c
                break
            
            esi = &esi[1]
        else if (eax_6.b u< 0xa0)
            if (eax_6.b u>= 0xfe)
                goto label_4fb7d7
            
            esi = &esi[2]
        else
            if (eax_6.b u<= 0xdf || eax_6.b u>= 0xfe)
                goto label_4fb7d7
            
            esi = &esi[2]
        
        if (*esi == 0)
            return sub_427aa0(eax_6, edx_2, data_1b8a720, 0xffffffff)

return sub_427aa0(eax_6, edx_2, data_1b8a720, ecx_5)
