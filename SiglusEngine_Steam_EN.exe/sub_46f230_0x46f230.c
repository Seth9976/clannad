// 函数: sub_46f230
// 地址: 0x46f230
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t** edi = arg1[2]

if (edi == 0)
    return 

int32_t i_1 = *arg1

if (i_1 s<= 0)
    return 

void* esi_1 = &edi[0x1b]
int32_t i

do
    if (*(esi_1 + 0x4c) == 0 || *(esi_1 + 0x48) == 0)
        int32_t* eax = sub_41cd30(eax, esi_1 + 0x8c, esi_1, nullptr, nullptr)
    else
        eax = *(esi_1 + 0x124) - 1
        
        if (eax u> 8)
            eax = sub_41cd30(eax, esi_1 + 0x8c, esi_1, nullptr, nullptr)
        else
            switch (eax)
                case nullptr, 8
                    if (*(esi_1 + 0x58) != 0x3e8 || *(esi_1 + 0x5c) != 0x3e8
                            || *(esi_1 + 0x60) != 0)
                        eax = sub_425ad0(eax, esi_1, *edi, nullptr)
                    else
                        int32_t* ecx = *edi
                        
                        if (ecx s>= 0)
                            eax = sub_4259b0(eax, esi_1, ecx, nullptr)
                    
                    eax = sub_41cd30(eax, esi_1 + 0x8c, esi_1, nullptr, nullptr)
                case 1, 4, 6, 7
                    eax = sub_41cd30(eax, esi_1 + 0x8c, esi_1, nullptr, nullptr)
                case 2
                    eax = sub_41cd30(sub_46ee20(esi_1 + 0x1a0, esi_1), esi_1 + 0x8c, esi_1, 
                        nullptr, nullptr)
                case 3
                    eax = sub_41cd30(sub_46edf0(esi_1 - 0x54, esi_1), esi_1 + 0x8c, esi_1, nullptr, 
                        nullptr)
                case 5
                    *edi
                    eax = sub_41cd30(sub_46ef50(esi_1 - 0x34, esi_1), esi_1 + 0x8c, esi_1, nullptr, 
                        nullptr)
    
    edi = &edi[0x1f6]
    esi_1 += 0x7d8
    i = i_1
    i_1 -= 1
while (i != 1)
