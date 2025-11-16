// 函数: sub_45dfb0
// 地址: 0x45dfb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t ecx = *arg1
char* eax_1 = arg1[1] + arg2

if (ecx s< eax_1)
    uint32_t edi_1 = ecx + arg2 + 0x100000
    
    if (arg1[3] == 0)
        BOOL eax_3 = sub_4d6960(arg2 + 0x100000, &arg1[3], &arg1[2], edi_1, "MOJIDATA")
        *arg1 = edi_1
        return eax_3
    
    sub_4d6ae0(arg2 + 0x100000, &arg1[3], &arg1[2], edi_1)
    eax_1 = _memset(arg1[3] + *arg1, 0, arg2 + 0x100000)
    *arg1 = edi_1

return eax_1
