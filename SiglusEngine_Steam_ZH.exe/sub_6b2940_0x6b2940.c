// 函数: sub_6b2940
// 地址: 0x6b2940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = data_bac4c8
uint32_t eax_1

if (arg1 u> 0x201)
    eax_1 = arg1 - 0x202
    
    switch (eax_1)
        case 0
            return sub_6b1e50(ecx + 0x5108)
        case 2
            sub_6b1df0(ecx + 0x5158)
        case 3
            return sub_6b1e50(ecx + 0x5158)
        case 5
            sub_6b1df0(ecx + 0x51a8)
        case 6
            return sub_6b1e50(ecx + 0x51a8)
        case 8
            void* var_14_3 = ecx
            return sub_6b2030(ecx + 0x51f8, arg2)
else
    if (arg1 == 0x201)
        sub_6b1df0(ecx + 0x5108)
        return arg1
    
    eax_1 = arg1 - 0x100
    
    switch (eax_1)
        case 0, 4
            return sub_6b2350(ecx + 0x5200, arg2, arg3)
        case 1, 5
            return sub_6b23c0(ecx + 0x5200, arg2, arg3)

return eax_1
