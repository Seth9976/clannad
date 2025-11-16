// 函数: sub_57d620
// 地址: 0x57d620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t var_8_1 = 0
void* i = &data_8fcaec
void* ebx = &data_1090b18

do
    int32_t esi_1 = arg2
    int32_t edi_1 = arg1
    
    if (var_8_1 u<= 0x3f)
        if (arg1 == 0xffffffff)
            edi_1 = *(ebx - 4)
        else if (arg1 == 0xfffffffe || arg1 s< 0 || arg1 s>= 0x100)
            edi_1 = *(i - 4)
        
        if (arg2 == 0xffffffff)
            esi_1 = *ebx
        else if (arg2 == 0xfffffffe || arg2 s< 0 || arg2 s>= 0x100)
            esi_1 = *i
        
        *(i - 4) = edi_1
        *i = esi_1
    
    var_8_1 += 1
    i += 0x2d0
    ebx += 0x1d4
while (i s< &data_907eec)

return i
