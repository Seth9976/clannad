// 函数: sub_40c560
// 地址: 0x40c560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_4 = ecx
int32_t i_1 = 0
int32_t i_3 = 0
sub_410990(arg2, *arg1, 0x18)
sub_410990(arg2, arg1[1], 0x18)
sub_410990(arg2, arg1[2] - 1, 0x18)
sub_410990(arg2, arg1[3] - 1, 6)
sub_410990(arg2, arg1[4], 8)
int32_t result = arg1[3]
int32_t ebp = 0

if (result s> 0)
    void* ebx = &arg1[5]
    int32_t i_2
    
    do
        if (sub_40c650(*ebx) s<= 3)
            sub_410990(arg2, *ebx, 4)
        else
            sub_410990(arg2, *ebx, 3)
            sub_410990(arg2, 1, 1)
            sub_410990(arg2, *ebx s>> 3, 5)
        
        i_2 = i_3 + sub_40c660(*ebx)
        result = arg1[3]
        ebp += 1
        ebx += 4
        i_3 = i_2
    while (ebp s< result)
    
    i_1 = i_2

if (i_1 s> 0)
    void* edi_1 = &arg1[0x45]
    int32_t i
    
    do
        result = sub_410990(arg2, *edi_1, 8)
        edi_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
