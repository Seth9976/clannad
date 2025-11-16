// 函数: sub_453500
// 地址: 0x453500
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg4 != 0 && data_702fc0 != 0)
    int32_t eax = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax = 0
        
        if (data_1af174c == 0 && eax != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, arg4, arg5), data_72d6ac, 
                    data_719b6c, arg4, arg5), 
                data_72d6ac, data_719b6c, arg4, arg5)

sub_49d030()
data_1af4254 = 1
sub_452d90(1)
sub_48e950(sub_4525d0(1, 0), &data_976f90, &data_719b6c, arg3, 0)
int32_t eax_4 = 0

if (data_976f94 != 0)
    if (arg2 == 0xffffffff)
        eax_4 = *(data_976f9c + 0x2c)
    else if (arg2 == 0xfffffffe)
        eax_4 = *(data_976f9c + 0x30)
    else if (arg2 s< 0x64)
        eax_4 = *(data_976f9c + (arg2 << 2) + 0x34)

data_719b6c = arg3
data_719b70 = arg2
data_719b74 = eax_4
data_719b78 = 0
data_719b7c = 0
sub_48d590(eax_4, arg3, &data_719ba4, arg2)
int32_t edi_1 = data_976fa8
char* result = data_719b6c - 1
int32_t ecx_4 = data_976f94
int32_t esi_3

if (result u> 0x270e || ecx_4 == 0)
    esi_3 = 0xffffffff
else
    esi_3 = data_719b74 + edi_1

bool cond:2 = data_7035c8 == 0
data_976fb0.d = esi_3
data_1af1728 = 0

if (not(cond:2) && ecx_4 != 0)
    result = data_976f9c
    
    if (data_12a2934 != 0)
        if (*(result + 0x1cc) == 2)
            return result
        
        goto label_4536dc
    
    if (*(result + 0x1cc) == 1)
    label_4536dc:
        result = sub_57fac0(0)
        
        if (result == 0 && data_1311178 == result && data_13926a4 == result
                && data_13926a0 == result && data_702fe4 == result && data_702fd8 == result
                && data_702fcc == result && data_91e8fc s< 0x80)
            result = sub_475310()
            
            if (result == 0)
                data_719b74 = esi_3 - edi_1
                return sub_4977f0(&result[6], nullptr)

return result
