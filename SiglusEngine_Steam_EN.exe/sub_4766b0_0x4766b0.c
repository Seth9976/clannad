// 函数: sub_4766b0
// 地址: 0x4766b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1
enum MESSAGEBOX_RESULT eax

if (arg1 s>= 0 && arg1 s< data_7031bc)
    eax = arg2 + (arg1 << 1)
    void* esi_1 = *(eax * 0x7a0 + 0x98c180)
    
    if (esi_1 != 0)
        int32_t i_1 = *(eax * 0x7a0 + &data_98c178)
        
        if (i_1 s<= 0)
            return eax
        
        void* esi_2 = esi_1 + 0x444
        int32_t* eax_2
        int32_t i
        
        do
            eax_2 = sub_462d80(esi_2 + 0x378, esi_2 - 0x78, esi_2 - 0x174, esi_2, esi_2 + 0x378)
            esi_2 += 0x7d8
            i = i_1
            i_1 -= 1
        while (i != 1)
        return eax_2

return sub_476410(eax, arg2, arg1, 0)
