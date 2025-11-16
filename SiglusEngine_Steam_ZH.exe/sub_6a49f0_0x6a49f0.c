// 函数: sub_6a49f0
// 地址: 0x6a49f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca129
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_60
int32_t* var_4c = arg1
int32_t var_8_1 = 0
var_8_1.b = 2
int16_t* ebx = arg4
int16_t* esi = arg3
int16_t* eax_3 = arg2
int32_t arg_8

while (true)
    char edx
    
    if (arg_8 == 0 || arg6 != 0)
        edx = 1
    else
        edx = 0
    
    int32_t ecx
    
    if (arg7 == 0 || arg12 != 0)
        ecx.b = 1
    else
        ecx.b = 0
    
    bool eax_4
    
    if (edx != 0 || ecx.b != 0)
        eax_4 = edx == ecx.b
    else if ((((esi - eax_3) ^ (arg9 - arg8)) & 0xfffffffe) != 0)
    label_6a4ab1:
        eax_4 = false
    else
        if (eax_3 != esi)
            int16_t* edx_5 = arg8 - eax_3
            
            do
                if (*eax_3 != *(edx_5 + eax_3))
                    goto label_6a4ab1_1
                
                eax_3 = &eax_3[1]
            while (eax_3 != esi)
        
        if (ebx != arg10 || arg5 != arg11)
        label_6a4ab1_1:
            eax_4 = false
        else
            eax_4 = true
    
    if (eax_4 != 0)
        break
    
    int32_t var_34
    int16_t* eax_5 = sub_66ead0(&arg_8, &var_34)
    var_8_1.b = 3
    
    if (arg1[1] == arg1[2])
        sub_55ca80(arg1, 1)
    
    int32_t* ecx_7 = arg1[1]
    int32_t* var_3c_2 = ecx_7
    int32_t* var_38_2 = ecx_7
    var_8_1.b = 4
    
    if (ecx_7 != 0)
        ecx_7[5] = 7
        ecx_7[4] = 0
        *ecx_7 = 0
        sub_52e3c0(ecx_7, eax_5, 0, 0xffffffff)
    
    arg1[1] += 0x18
    var_8_1.b = 2
    int32_t var_20
    
    if (var_20 u>= 8)
        j__free(var_34)
    
    int16_t* var_44
    int16_t* var_40
    int16_t* edi_3
    
    if (arg_8 == 0)
        edi_3 = arg5
        esi = edi_3
        ebx = edi_3
        var_44 = esi
        var_40 = ebx
    label_6a4b82:
        char eax_7 = arg6
        
        if (arg3 == edi_3)
            eax_7 = 1
        
        arg6 = eax_7
    else
        int16_t* var_64_3 = arg5
        sub_6064f0(&arg_8, &var_44, arg4)
        esi = var_44
        edi_3 = arg5
        ebx = var_40
        
        if (esi == edi_3)
            if (ebx == edi_3)
                goto label_6a4b82
            
            eax_3 = arg4
            arg2 = eax_3
            arg3 = esi
            arg4 = ebx
            continue
    eax_3 = arg4
    arg2 = eax_3
    arg3 = esi
    arg4 = ebx

int32_t var_8_2 = 0
int32_t eax_8 = arg_8
int32_t result

if (eax_8 == 0)
    result = arg7
else
    int32_t eax_10
    
    if ((eax_8.b & 1) == 0)
        eax_10 = *(eax_8 & 0xfffffffe)
    
    if ((eax_8.b & 1) != 0 || eax_10 == 0)
        result = arg7
        arg_8 = 0
    else
        void arg_10
        eax_10(&arg_10, &arg_10, 2)
        result = arg7
        arg_8 = 0

int32_t var_8_3 = 0xffffffff

if (result != 0 && (result.b & 1) == 0)
    result = *(result & 0xfffffffe)
    void arg_50
    
    if (result != 0)
        result = result(&arg_50, &arg_50, 2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
