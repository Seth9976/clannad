// 函数: sub_7306c0
// 地址: 0x7306c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* (** i)(int32_t* arg1)
int32_t ecx
i, ecx = (**(arg1 + 4))(arg1, 1, 0x54)
*(arg1 + 0x1b4) = i
void* (** i_1)(int32_t* arg1) = nullptr
*i = sub_730080

if (*(arg1 + 0x24) s> 0)
    int32_t* edi_1 = *(arg1 + 0xc4) + 0x54
    void* ebx_1 = &i[0xb]
    
    do
        char* eax_4 = (**(arg1 + 4))(arg1, 1, 0x100)
        *edi_1 = eax_4
        _memset(eax_4, 0, 0x100)
        ebx_1 += 4
        i = i_1 + 1
        *(ebx_1 - 4) = 0xffffffff
        i_1 = i
        edi_1 = &edi_1[0x16]
    while (i s< *(arg1 + 0x24))

return i
