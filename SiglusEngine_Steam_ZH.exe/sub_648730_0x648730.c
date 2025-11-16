// 函数: sub_648730
// 地址: 0x648730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c37a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s<= 0 || arg4 s<= 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t eax_7 = *arg3
bool cond:0 = eax_7 == arg3[1]
int32_t var_2c = 0

if (cond:0)
    eax_7 = 0

int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0
int32_t i_4
int32_t var_20
int32_t var_1c

if (arg6 == 0 || arg6 == 1)
    if (sub_647500(arg6, arg2, &var_2c, arg7, arg5, arg6) != 0)
        int32_t edx_7 = var_2c
        int32_t eax_13 = edx_7
        
        if (edx_7 == var_28)
            eax_13 = 0
        
        int32_t eax_15
        int32_t edx_8
        edx_8:eax_15 = sx.q(arg4)
        i_4 = divs.dp.d(edx_8:eax_15, arg7)
        
        if (mods.dp.d(edx_8:eax_15, arg7) != 0)
            i_4 += 1
        
        int32_t eax_17 = arg6
        
        if (eax_17 != 0)
            int32_t edi_4 = 0
            
            if (i_4 s> 0)
                int32_t i
                
                do
                    eax_17 = sub_6c97b0(eax_17, arg3[3], eax_7, arg3[4], eax_13, var_20, var_1c, 0, 
                        edi_4)
                    edi_4 += arg7
                    i = i_4
                    i_4 -= 1
                while (i != 1)
        else
            int32_t edi_3 = arg4 - arg7
            
            if (i_4 s> 0)
                int32_t i_1
                
                do
                    eax_17 = sub_6c97b0(eax_17, arg3[3], eax_7, arg3[4], eax_13, var_20, var_1c, 0, 
                        edi_3)
                    edi_3 -= arg7
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
        
        i_4.b = 1
    else
        i_4.b = 0
else if (sub_647500(arg6, arg7, &var_2c, arg4, arg5, arg6) == 0)
    i_4.b = 0
else
    int32_t edx_1 = var_2c
    int32_t ecx_1 = edx_1
    
    if (edx_1 == var_28)
        ecx_1 = 0
    
    int32_t eax_11
    int32_t edx_2
    edx_2:eax_11 = sx.q(arg2)
    int32_t i_6 = divs.dp.d(edx_2:eax_11, arg7)
    int32_t var_18_1 = ecx_1
    int32_t i_5 = i_6
    
    if (mods.dp.d(edx_2:eax_11, arg7) != 0)
        i_5 += 1
    
    if (arg6 != 2)
        i_4 = 0
        
        if (i_5 s> 0)
            int32_t i_2
            
            do
                i_6 = sub_6c97b0(i_6, arg3[3], eax_7, arg3[4], ecx_1, var_20, var_1c, i_4, 0)
                i_4 += arg7
                ecx_1 = var_18_1
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
    else if (i_5 s> 0)
        i_4 = arg2 - arg7
        int32_t i_3
        
        do
            i_6 = sub_6c97b0(i_6, arg3[3], eax_7, arg3[4], ecx_1, var_20, var_1c, i_4, 0)
            i_4 -= arg7
            ecx_1 = var_18_1
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
    
    i_4.b = 1
int32_t eax_18 = var_2c

if (eax_18 != 0)
    j__free(eax_18)

eax_18.b = i_4.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_18
