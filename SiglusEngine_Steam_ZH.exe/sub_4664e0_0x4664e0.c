// 函数: sub_4664e0
// 地址: 0x4664e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *arg1
int32_t esi = arg1[0x69]
int32_t edi
int32_t var_10 = edi
int32_t edi_1 = arg2
*(eax + 0x14) = 0x79
*(eax + 0x18) = esi
*(eax + 0x1c) = edi_1
(*(eax + 4))(arg1, 0xffffffff)

while (true)
    int32_t edi_5
    
    if (esi s< 0xc0)
        edi_5 = 2
    else if (esi s< 0xd0 || esi s> 0xd7 || esi == ((edi_1 + 1) & 7) + 0xd0
            || esi == ((edi_1 + 2) & 7) + 0xd0)
        edi_5 = 3
    else if (esi == ((edi_1 - 1) & 7) + 0xd0 || esi == ((edi_1 - 2) & 7) + 0xd0)
        edi_5 = 2
    else
        edi_5 = 1
    
    void* eax_4 = *arg1
    *(eax_4 + 0x14) = 0x61
    *(eax_4 + 0x18) = esi
    *(eax_4 + 0x1c) = edi_5
    (*(eax_4 + 4))(arg1, 4)
    
    if (edi_5 == 1)
        arg1[0x69] = 0
    else if (edi_5 == 2)
        if (sub_465f90(arg1) == 0)
            break
        
        esi = arg1[0x69]
        edi_1 = arg2
        continue
    else if (edi_5 != 3)
        edi_1 = arg2
        continue
    
    return 1

return 0
