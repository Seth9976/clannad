// 函数: sub_43c606
// 地址: 0x43c606
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** var_8 = arg1
void*** var_c = arg1
int32_t edi
int32_t var_18 = edi
int32_t* edi_1 = arg2
void* esi = arg1
var_c = nullptr

if (edi_1 != 0 && edi_1[1] == 3)
    sub_43be42(arg1, 0, &edi_1[4], nullptr, nullptr, *(esi + 0x10), 1, &var_c, nullptr)
    edi_1 = var_c

arg2 = esi + 0x20
int32_t* ebx_1

if (arg4 == 0)
    var_c = nullptr
    ebx_1 = arg3
    
    if (ebx_1 != 0)
        if (ebx_1[1] != 0xd)
            return nullptr
        
        var_c = ebx_1[4]
        arg2 = &ebx_1[0xc]
    
    int32_t eax_5 = sub_4392fd(esi, edi_1, var_c, arg5)
    
    if (eax_5 == 0)
        sub_439635(esi, arg2, eax_5, edi_1, var_c, arg5)
        return nullptr
    
    int32_t eax_6 = sub_437693(esi, edi_1)
    int32_t eax_7
    
    if (eax_6 == 0)
        eax_7 = sub_437693(esi, var_c)
    
    if (eax_6 != 0 || eax_7 != 0)
        arg3 = 1
    else
        arg3 &= eax_7
else
    int32_t eax_1
    
    if (edi_1 != 0 && edi_1[1] == 9)
        eax_1 = sub_43772a(esi, edi_1)
    
    if (edi_1 == 0 || edi_1[1] != 9 || eax_1 == 0)
        sub_43713d(esi, arg2, 0xbdd, "constructors only defined for numeric base types")
        return nullptr
    
    ebx_1 = arg3
    
    if (ebx_1 != 0 && ebx_1[1] != 1)
        return nullptr
    
    arg3 = sub_437693(esi, edi_1)

arg3 |= sub_438042(ebx_1)
void*** eax_9 = sub_42cfa1(0x50)
void*** result = nullptr

if (eax_9 != 0)
    result = sub_46bee5(eax_9, 0, 0, 0, 0, 1, arg2)

if (result == 0)
    return nullptr

int32_t eax_12

if (edi_1 != 0)
    eax_12 = (*(*edi_1 + 4))()
    result[4] = eax_12

if (edi_1 != 0 && eax_12 == 0)
    return nullptr

int32_t eax_14

if (ebx_1 != 0)
    eax_14 = (*(*ebx_1 + 4))()
    result[8] = eax_14

if (ebx_1 != 0 && eax_14 == 0)
    return nullptr

int32_t var_20_2
char* var_1c_11

if (arg4 != 0)
    for (void* i = result[8]; i != 0; i = *(i + 0xc))
        void* eax_15 = *(i + 8)
        
        if (eax_15 != 0 && *(eax_15 + 4) == 0xd)
            if (sub_43772a(esi, *(eax_15 + 0x10)) == 0)
                var_1c_11 = "cannot convert from 'object type' to 'numeric type'"
                var_20_2 = 0xbc9
                goto label_43c80b
            
            if (arg3 == 0)
                arg3 = sub_437693(esi, *(*(i + 8) + 0x10))

if (arg3 != 0)
    sub_437571(esi, result[4], 1)

if (arg4 != 0)
    void* i_1 = result[8]
    int32_t ebx_2 = 0
    
    for (; i_1 != 0; i_1 = *(i_1 + 0xc))
        void* eax_19 = *(i_1 + 8)
        
        if (eax_19 != 0 && *(eax_19 + 4) == 0xd)
            ebx_2 += sub_4377a1(esi, *(eax_19 + 0x10))
    
    if (ebx_2 != sub_4377a1(esi, result[4]))
        var_1c_11 = "incorrect number of arguments to numeric-type constructor"
        var_20_2 = 0xbc6
    label_43c80b:
        sub_43713d(esi, arg2, var_20_2, var_1c_11)
        return nullptr

sub_4381dc(result)
return result
