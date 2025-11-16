// 函数: sub_527960
// 地址: 0x527960
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1

if (data_1311178 == 0 && (data_1606c68 != 0 || data_1606d7c s> 1))
    data_1606d78 = 1
    data_1606c68 = 1

arg1.b = 0
sub_420350(arg1)
int32_t eax = data_703678
int32_t edi_1 = *(arg2 + 0x34)
data_131923c = 0

if (eax == 1)
    eax = 2

data_1af17b4 = 0
data_703678 = eax
int32_t ecx = 0
int32_t eax_1 = data_1bfdd30
data_108f2d4 = 0

if (eax_1 == 0 || eax_1 == 0xa)
    ecx = 0
    data_108f2d4 = ecx
else if (eax_1 == 1 || eax_1 == 0xb)
    ecx = 1
    data_108f2d4 = ecx
else if (eax_1 == 2 || eax_1 == 0xc || eax_1 == 3 || eax_1 == 0xd)
    ecx = 2
    data_108f2d4 = ecx
else if (eax_1 == 4 || eax_1 == 0xe)
    ecx = 3
    data_108f2d4 = ecx

data_13130d4 = 0

if (eax_1 == 3 || eax_1 == 0xd)
    data_13130d4 = 1

data_108f2d8 = 0

if (eax_1 == 0xa || eax_1 == 0xb || eax_1 == 0xc || eax_1 == 0xd || eax_1 == 0xe)
    data_108f2d8 = 1

data_108f2dc = 0
data_107eff4 = 0
data_107eff0 = 0xff
data_107efa0 = 0xfffffffe
data_107efa4 = 0xffffffff
char* result

if (ecx == 3)
    data_13130d0 = 0xfffffffe
    result = sub_527890()
else if (ecx != 2)
    int32_t eax_5 = 0
    data_13130d0 = 0xfffffffe
    data_13130d8 = 0
    int32_t edx_4
    
    if (edi_1 u> 0x3f)
        edx_4 = 0
    else
        int32_t esi_1 = *(edi_1 * 0x1d4 + 0x1090bf0)
        bool cond:3_1
        
        if (esi_1 != 0xffffffff)
            cond:3_1 = esi_1 == 0
        else
            cond:3_1 = ecx == 0
        
        if (cond:3_1)
            edx_4 = 0
        else
            int32_t eax_6 = *(edi_1 * 0x1d4 + 0x1090bf4)
            
            if (eax_6 == 0xffffffff)
                eax_6 = data_7037c4
            
            data_13130d0 = eax_6
            
            if (eax_6 == 0xfffffffe)
                eax_5 = 1
                data_13130d8 = eax_5
                edx_4 = 0
            else if (eax_6 u> 0x1f)
                eax_5 = 0
                data_13130d0 = 0xfffffffe
                data_13130d8 = eax_5
                edx_4 = 0
            else
                eax_5 = 1
                data_13130d8 = 1
                edx_4 = 1
    
    int32_t var_10 = 0
    result = sub_527290(eax_5, arg2, var_c, ecx, edx_4, eax_5, &var_10)
    
    if (result == 0)
        data_715e98 = 0xfffffffe
        data_13130d4 = 0
    else
        result = data_13130d8
        
        if (var_10 != 0)
            result = 1
        
        data_13130d8 = result
        
        if (edi_1 u> 0x3f)
            data_715e98 = 0xfffffffe
            data_13130d4 = 0
        else
            if (result != 0)
                sub_57e0c0(edi_1, data_13130d0)
            
            result = sub_527660(0)
else
    data_131d2dc = 0xfffffffe
    result = sub_527530(var_c, arg2)
    
    if (result == 0)
        data_715e98 = 0xfffffffe
        data_13130d4 = 0
    else
        int32_t eax_2 = data_131d2d0
        
        if (eax_2 != 0xffffffff)
            int32_t edx_1 = *(eax_2 * 0x10c + 0x1098074)
            
            if (edx_1 != 0xffffffff)
                data_131d2dc = edx_1
                sub_57e0c0(0xffffffff, edx_1)
        
        result = sub_527660(1)

if (data_70378c != 0)
    result = sub_57fbb0()

if (data_702fc0 != 0)
    result = sub_573430(1)

data_1333e48 = 1
return result
