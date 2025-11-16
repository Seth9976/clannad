// 函数: sub_461ea8
// 地址: 0x461ea8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
sub_46110f(arg1, *(arg2 + 4), arg2 + 8)
int32_t i = 0
int32_t edi
int32_t var_14_1 = edi
int32_t* edi_1 = *(arg2 + 0x1c)
int32_t result

if (edi_1 != 0 && *edi_1 u> 0)
    do
        result = sub_46148a(arg1, *(edi_1[3] + (i << 2)))
        
        if (result != 0)
            return result
        
        i += 1
    while (i u< *edi_1)

if (*(arg2 + 0x24) != 0)
    int32_t* esi_1 = *(arg2 + 0x20)
    
    if (esi_1 == 0)
        result = sub_46117b(arg1)
    else
        result = sub_461247(arg1, esi_1)
else
    result = sub_4611c0(arg1)

if (result == 0)
    result = sub_4613b7(arg1, 2)

return result
