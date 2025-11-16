// 函数: sub_47fe25
// 地址: 0x47fe25
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ebx = arg5
char* eax = ebx
void* esi = arg1

do
    arg1.b = *eax
    eax = &eax[1]
while (arg1.b != 0)

if (eax - &eax[1] u<= 2)
    int16_t* var_10 = ebx
    sub_42aba3(arg2, arg4, 0x7d5, "invalid register, input, or constant name '%s'")
    return 0x80004005

int32_t* ecx = arg8
int32_t edi
int32_t var_10_1 = edi
int32_t* edi_1 = arg7
*edi_1 = 0
*ecx = 0
*arg9 = 0
void* edx
edx.w = *ebx
int32_t result
void* arg_14

if (edx.w != 0x5f76)
    edx.w = *ebx
    
    if (edx.w != 0x5f72)
        edx.w = *ebx
        
        if (edx.w == 0x5f63 || edx.w == 0x5f62 || edx.w == 0x5f69 || edx.w == 0x5f73)
            int32_t edi_5
            
            if (*ebx == 0x5f62)
                *edi_1 = 0xe
                edi_5 = 0
            else if (*ebx != 0x5f69)
                int32_t var_14_14
                
                if (*ebx != 0x5f73)
                    *edi_1 = 2
                    var_14_14 = 3
                else
                    *edi_1 = 0xa
                    var_14_14 = 2
                
                edi_5 = var_14_14
            else
                *edi_1 = 7
                edi_5 = 1
            
            PSTR* eax_19 = sub_47e11a(esi, ebx)
            CHAR** ecx_16
            
            if (eax_19 == 0)
                int32_t** var_14_16 = &arg8
                result = sub_48195d(arg3, arg4, ebx)
                
                if (result s>= 0)
                    if (arg8 != 0)
                        int32_t* var_14_18 = arg8
                        *arg9 = *(esi + (edi_5 << 2) + 0x8c)
                        sub_47fcd9(esi, ebx, *(esi + (edi_5 << 2) + 0x8c), var_14_18)
                        *(esi + (edi_5 << 2) + 0x8c) += arg8
                        *(esi + 0xac) += 1
                        ecx_16 = arg9
                        goto label_48015b
                    
                    void* var_14_17 = &ebx[1]
                    int16_t* var_18_9 = ebx
                    sub_42aba3(arg2, arg4, 0x7d5, 
                        "constant register '%s' must be defined as a variable '%s'")
                    result = 0x80004005
            else
                ecx_16 = arg9
                *ecx_16 = eax_19[1]
                arg8 = eax_19[2]
            label_48015b:
                void* eax_24 = arg_14
                
                if (eax_24 == 0)
                    result = 0
                else
                    int32_t eax_25 = *(eax_24 + 0x18)
                    
                    if (eax_25 u<= arg8)
                        *ecx_16 = &(*ecx_16)[eax_25]
                        result = 0
                    else
                        int32_t var_14_19 = eax_25
                        int32_t* var_18_11 = arg8
                        int16_t* var_1c_10 = ebx
                        sub_42aba3(arg2, arg4, 0x7d5, 
                            "constant register address out of bounds on constant '%s', size %d, offset %d")
                        result = 0x80004005
        else if (*(esi + 0xb0) == 0 || edx.w != 0x5f6f)
            int16_t* var_14_13 = ebx
            sub_42aba3(arg2, arg4, 0x7d5, 
                "'%s' is not a valid register name.  Registers must start with v_, r_, c_, b_, or i_ "
            "depending on the register type. (o_ for vs_3_0 only)")
            result = 0x80004005
        else
            *edi_1 = 6
            PSTR* eax_14 = sub_47e11a(esi + 0x38, ebx)
            
            if (eax_14 == 0)
                if (sub_47de83(&ebx[1], &arg7:3, &arg5:3) s>= 0)
                    *arg9 = *(esi + 0xa0)
                    sub_47fcd9(esi + 0x38, ebx, *(esi + 0xa0), 1)
                    *(esi + 0xa0) += 1
                    goto label_48006c
                
                int16_t* var_14_11 = ebx
                sub_42aba3(arg2, arg4, 0x7d5, "Invalid output register '%s' specified")
                result = 0x80004005
            else
                *arg9 = eax_14[1]
            label_48006c:
                
                if (arg_14 == 0)
                    result = 0
                else
                    int16_t* var_14_12 = ebx
                    sub_42aba3(arg2, arg4, 0x7d5, 
                        "addressing operations are not allowed on output registers '%s'")
                    result = 0x80004005
    else
        *edi_1 = 0
        PSTR* eax_11 = sub_47e11a(esi + 0x54, ebx)
        
        if (eax_11 == 0)
            *arg9 = *(esi + 0xa4)
            sub_47fcd9(esi + 0x54, ebx, *(esi + 0xa4), 1)
            *(esi + 0xa4) = &(*(esi + 0xa4))[1]
        else
            *arg9 = eax_11[1]
        
        if (arg_14 == 0)
            result = 0
        else
            int16_t* var_14_8 = ebx
            sub_42aba3(arg2, arg4, 0x7d5, 
                "addressing operations not allowed on temporary registers '%s'")
            result = 0x80004005
else
    int32_t eax_2 = *(esi + 0xb4)
    
    if (eax_2 s< 0xa || eax_2 s> 0xc)
        *edi_1 = 1
        PSTR* eax_6 = sub_47e11a(esi + 0x1c, ebx)
        
        if (eax_6 == 0)
            if (sub_47de83(&ebx[1], &arg7:3, &arg5:3) s< 0)
                goto label_47feaf
            
            *arg9 = *(esi + 0x9c)
            sub_47fcd9(esi + 0x1c, ebx, *(esi + 0x9c), 1)
            *(esi + 0x9c) += 1
            goto label_47ff55
        
        *arg9 = eax_6[1]
    label_47ff55:
        
        if (arg_14 == 0)
            result = 0
        else
            int16_t* var_14_6 = ebx
            sub_42aba3(arg2, arg4, 0x7d5, 
                "addressing operations are not allowed on input registers '%s'")
            result = 0x80004005
    else if (sub_47de83(&ebx[1], &arg_14:3, &arg5:3) s< 0)
    label_47feaf:
        int16_t* var_14_2 = ebx
        sub_42aba3(arg2, arg4, 0x7d5, "Invalid input register '%s' specified")
        result = 0x80004005
    else if (arg6 == 5)
        *edi_1 = 3
        *arg9 = zx.d(arg5:3.b)
        result = 0
    else if (arg6 != 0xa)
        int16_t* var_14_3 = ebx
        sub_42aba3(arg2, arg4, 0x7d5, "Invalid pixel shader input register '%s' specified")
        result = 0x80004005
    else
        *edi_1 = 1
        *arg9 = zx.d(arg5:3.b)
        result = 0
return result
