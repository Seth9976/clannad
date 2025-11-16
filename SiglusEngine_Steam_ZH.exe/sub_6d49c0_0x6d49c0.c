// 函数: sub_6d49c0
// 地址: 0x6d49c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char const* const eax = "undefined"

if (arg2 != 0)
    eax = arg2

char const* const var_8 = eax
_fprintf(&data_b4c230, "libpng error: %s")
_fprintf(&data_b4c230, U"\n")

if (arg1 != 0)
    int32_t eax_1 = *(arg1 + 0x40)
    
    if (eax_1 != 0)
        int32_t ecx = *(arg1 + 0x44)
        
        if (ecx != 0)
            eax_1(ecx, 1)

ExitProcess(0)
noreturn
