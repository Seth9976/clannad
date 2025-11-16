// 函数: sub_42a749
// 地址: 0x42a749
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t var_8_1 = 0
char* i = arg2
int32_t edi
int32_t var_14 = edi
bool cond:0_1

if (i u< *(arg1 + 4))
    cond:0_1 = _isdigit(sx.d(*i)) != 0

if (i u< *(arg1 + 4) && cond:0_1)
    bool cond:2_1
    
    do
        i = &i[1]
        
        if (i u>= *(arg1 + 4))
            break
        
        cond:2_1 = _isdigit(sx.d(*i)) == 0
    while (not(cond:2_1))
    int32_t eax_8 = *(arg1 + 4)
    
    if (i u>= eax_8 || *i != 0x2e)
        var_8_1 = 1
    else
        i = &i[1]
        
        if (i u< eax_8)
            do
                if (_isdigit(sx.d(*i)) == 0)
                    break
                
                i = &i[1]
            while (i u< *(arg1 + 4))
    
label_42a7f8:
    
    if (&i[1] u< *(arg1 + 4) && _tolower(sx.d(*i)) == 0x65 && _isdigit(sx.d(i[1])) != 0)
        for (i = &i[2]; i u< *(arg1 + 4); i = &i[1])
            if (_isdigit(sx.d(*i)) == 0)
                break
        
        goto label_42a881
    
    if (&i[2] u< *(arg1 + 4) && _tolower(sx.d(*i)) == 0x65 && i[1] == 0x2d
            && _isdigit(sx.d(i[2])) != 0)
        for (i = &i[3]; i u< *(arg1 + 4); i = &i[1])
            if (_isdigit(sx.d(*i)) == 0)
                break
        
        goto label_42a881
    
    if (var_8_1 == 0)
    label_42a881:
        
        if (arg3 != 0)
            void* edi_3 = i - arg2
            void* var_8_2 = edi_3
            __chkstk((edi_3 + 4) & 0xfffffffc)
            int32_t esi_3
            int32_t edi_4
            edi_4, esi_3 = __builtin_memcpy(&var_14, arg2, edi_3 u>> 2 << 2)
            __builtin_memcpy(edi_4, esi_3, edi_3 & 3)
            *(&var_14 + edi_3) = 0
            *arg3 = fconvert.d(_atof(&var_14))
        
        return i - arg2
else if (&i[1] u< *(arg1 + 4) && *i == 0x2e && _isdigit(sx.d(i[1])) != 0)
    for (i = &i[2]; i u< *(arg1 + 4); i = &i[1])
        if (_isdigit(sx.d(*i)) == 0)
            break
    
    goto label_42a7f8

return nullptr
