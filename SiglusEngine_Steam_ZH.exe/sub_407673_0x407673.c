// 函数: sub_407673
// 地址: 0x407673
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
int32_t* edi_1 = arg7
int32_t* result = nullptr
int32_t* var_14 = nullptr
void*** var_10 = nullptr
int32_t* var_c = nullptr

if (edi_1 != 0)
    *edi_1 = 0

if (arg8 != 0)
    *arg8 = 0

int32_t* arg_8

if (arg1 == 0 || arg_8 == 0)
    result = 0x8876086c
label_4077d5:
    int32_t* eax_10 = var_14
    
    if (eax_10 != 0)
        (*(*eax_10 + 8))(eax_10)
else
    void*** eax_1 = sub_745f3f(0x130)
    void* ecx_1 = 0x130
    
    if (eax_1 == 0)
        var_10 = nullptr
    else
        void*** eax_2
        eax_2, ecx_1 = sub_44cd0e(eax_1)
        var_10 = eax_2
    
    if (var_10 == 0)
        result = 0x8007000e
    else if (arg2 u>= 4)
        if (*arg_8 != 0xfeff0901)
            int32_t* result_1 = sub_407562(ecx_1, arg_8, arg2, arg3, arg4, arg5, &var_14, arg8)
            result = result_1
            
            if (result_1 s< 0)
                goto label_4077d5
            
            if (arg8 != 0)
                int32_t* eax_4 = *arg8
                
                if (eax_4 != 0)
                    (*(*eax_4 + 8))(eax_4)
                    *arg8 = 0
            
            int32_t* eax_5 = var_14
            int32_t* result_2 = (*(*eax_5 + 0xf4))(eax_5, arg5 & 0xffffffe7, &var_c, arg8)
            result = result_2
            
            if (result_2 s< 0 || arg7 == 0)
                goto label_4077d5
            
        label_407797:
            arg_8 = nullptr
            int32_t* result_4 = sub_457357(var_10, arg1, arg6, var_c, &arg_8)
            result = result_4
            
            if (result_4 s>= 0)
                int32_t* result_5 = sub_452ca1(var_10)
                result = result_5
                
                if (result_5 s>= 0)
                    *arg7 = var_10
                    (*var_10)[1](var_10)
            
            goto label_4077d5
        
        if (edi_1 != 0)
            int32_t** var_24_4 = &var_c
            void* var_28_3 = arg2
            int32_t* result_3 = sub_458de2()
            result = result_3
            
            if (result_3 s>= 0)
                int32_t* eax_6 = var_c
                int32_t esi_2
                int32_t edi_5
                edi_5, esi_2 = __builtin_memcpy((*(*eax_6 + 0xc))(eax_6), arg_8, arg2 u>> 2 << 2)
                __builtin_memcpy(edi_5, esi_2, arg2 & 3)
                
                if (arg7 == 0)
                    goto label_4077d5
                
                goto label_407797
    else
        result = 0x80004005

int32_t* eax_11 = var_c

if (eax_11 != 0)
    (*(*eax_11 + 8))(eax_11)
    var_c = nullptr

if (var_10 != 0)
    (*var_10)[2](var_10)

return result
