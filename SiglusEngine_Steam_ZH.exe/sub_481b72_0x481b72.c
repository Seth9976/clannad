// 函数: sub_481b72
// 地址: 0x481b72
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg7 |= 0x80
int32_t edi
int32_t var_6c = edi
int16_t* edi_1 = arg4
bool cond:0 = 0x5f63 == *edi_1
void* var_8 = nullptr
char* var_c
void* result
int32_t* esi_1

if (not(cond:0) && 0x5f62 != *edi_1 && 0x5f69 != *edi_1 && 0x5f73 != *edi_1)
    esi_1 = arg3
    int16_t var_40 = 1
    int16_t var_3e_1 = 3
    int16_t var_3c_1 = 1
    int16_t var_3a_1 = 4
    int16_t var_38_1 = 1
    int16_t var_36_1 = 0
    int32_t var_34_1 = 0
    result = sub_4c6c51(arg2, &var_40, 0x10, 6, &esi_1[3])
    
    if (result s< 0)
        return result
    
    var_c = 1
label_481e75:
    result = sub_4c6c51(arg2, arg4, 0xffffffff, 7, esi_1)
    
    if (result s>= 0)
        if (0x5f62 != *arg4)
            int16_t edx_1
            edx_1.b = 0x5f69 != *arg4
            esi_1[1].w = edx_1 + 1
        else
            esi_1[1].w = 0
        
        *(esi_1 + 6) = arg5
        esi_1[2].w = var_c.w
    
    return result

void* eax_1 = &edi_1[1]
void* var_58_1 = eax_1
void* var_7c_1 = arg1[1]
void* ecx_1 = *arg1
int32_t var_60 = 0xa
int32_t var_50_1 = 0
int32_t var_4c_1 = 0
sub_43be42(ecx_1, 1, &var_60, nullptr, nullptr, var_7c_1, 2, &var_8, nullptr)
int32_t var_24
result = sub_48189a(*(var_8 + 0x20), &var_c, &var_24)

if (result s< 0)
    return result

void* eax_3 = var_8
esi_1 = arg3

if (*(eax_3 + 0x30) != 0)
    void* i_2 = *(eax_3 + 0x30)
    arg3 = nullptr
    char* var_14_1 = nullptr
    char* var_18_1 = nullptr
    void* i_1 = i_2
    
    if (i_2 != 0)
        void* i
        
        do
            void* eax_5 = *(i_1 + 8)
            
            if (*(eax_5 + 4) == 0x11)
                void* ecx_2 = *(eax_5 + 0x10)
                char* ecx_3
                
                if (ecx_2 != 0)
                    ecx_3 = *(ecx_2 + 0x18)
                else
                    ecx_3 = nullptr
                
                void* eax_6 = *(eax_5 + 0x14)
                char* edi_2
                
                if (eax_6 != 0)
                    edi_2 = *(eax_6 + 0x18)
                else
                    edi_2 = nullptr
                
                void var_30
                
                if (ecx_3 != 0)
                    int32_t var_2c
                    
                    if (sub_46b27d(ecx_3, 0, &var_30) s>= 0 && edi_2 != 0
                            && _tolower(sx.d(*edi_2)) == sx.d(*arg4))
                        if (arg6 == var_2c)
                            arg3 = edi_2
                        else if (((var_2c ^ arg6) & 0xffff0000) == 0 && (var_2c.w & 0xffff) == 0)
                            var_14_1 = edi_2
                else if (edi_2 != 0 && _tolower(sx.d(*edi_2)) == sx.d(*arg4))
                    var_18_1 = edi_2
            
            i = *(i_1 + 0xc)
            i_1 = i
        while (i != 0)
        edi_1 = arg4
    
    if (i_2 != 0 && arg3 != 0)
        goto label_481d48
    
    arg3 = var_14_1
    
    if (var_14_1 != 0)
    label_481d48:
        uint32_t eax_18 = _tolower(sx.d(*arg3))
        
        if (sx.d(*edi_1) == eax_18 && _isdigit(sx.d(*(arg3 + 1))) != 0)
            void* edi_4 = arg3 + 2
            
            while (_isdigit(sx.d(*edi_4)) != 0)
                edi_4 += 1
            
            if (*edi_4 == 0)
                void* var_70_8 = arg3 + 1
                int32_t eax_24 = sub_75efed()
                
                if (eax_24 u> 0x1fff)
                    int32_t var_70_9 = eax_24
                    void* var_74_3 = eax_1
                    sub_42aba3(*(*arg1 + 4) + 0x18, nullptr, 0xb56, 
                        "Constant variable '%s' bound to register greater than 8191 (%d requested)")
                    return 0x80004005
                
                *(esi_1 + 0xa) |= (eax_24 << 2).w | 2
    else
        arg3 = var_18_1
        
        if (var_18_1 != 0)
            goto label_481d48

void* ecx_14 = var_8

if ((*(ecx_14 + 0x1c) & 2) != 0)
    *(esi_1 + 0xa) |= 1

char* eax_31 = *(ecx_14 + 0x28)

if (eax_31 != 0)
label_481e4c:
    result = sub_481a58(arg2, var_c, var_24, eax_31, &esi_1[4])
label_481df9:
    
    if (result s< 0)
        return result
else
    if (*(ecx_14 + 0x24) != 0)
        if (eax_31 == 0)
            eax_31 = *(ecx_14 + 0x24)
        
        goto label_481e4c
    
    if ((*(esi_1 + 0xa) & 1) != 0)
        result = sub_481b1b(arg2, var_c, &esi_1[4])
        goto label_481df9

void* ecx_15 = var_8
void* eax_33 = *(ecx_15 + 0x20)

if (*(eax_33 + 4) == 9 && *(eax_33 + 0x14) == 0x14)
    void* var_70_11 = eax_1
    sub_42aba3(*(*arg1 + 4) + 0x18, nullptr, 0xb59, 
        "Sampler variable '%s' does not specify the sampler type.  Explicit sampler types required for "
    "asm fragments.")
    return 0x80004005

result = sub_4d16f4(arg2, *(ecx_15 + 0x20), 1, 0, &esi_1[3])

if (result s< 0)
    return result

goto label_481e75
