// 函数: sub_6c99b0
// 地址: 0x6c99b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc809
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t esi_2 = (arg1[1] - *arg1) s>> 3
int32_t* ecx = sub_745f3f(0x78)

if (ecx == 0)
    ecx = nullptr
else
    sub_6c7fd0(ecx)
    ecx[0x1b] = 0
    ecx[0x1c] = 0
    ecx[0x1d].b = 0

int32_t* var_30 = ecx
int32_t* var_2c = nullptr
int32_t var_8_1 = 1
int32_t* var_44 = &var_2c
int32_t ecx_1 = sub_6c8fd0(&var_2c, ecx, ecx)
int32_t var_44_1 = 0
int32_t var_8_2 = 2
char eax_5 = sub_6c8170(var_30, arg1[3], arg1[4], ecx_1, 0)
int32_t* result
int32_t* esi_3
bool cond:0_1

if (eax_5 != 0)
    int32_t* ecx_4 = var_30
    int32_t eax_7
    
    if (ecx_4[0xd].b == 0)
        eax_7 = ecx_4[0xe]
        
        if (eax_7 == ecx_4[0xf])
            eax_7 = 0
    else
        eax_7 = ecx_4[0x11]
    
    int32_t ecx_6 = __builtin_memset(eax_7, 0, (arg1[4] * arg1[3]) << 2)
    int32_t edi_1 = 0
    var_30[0x1d].b = 1
    
    if (esi_2 s> 0)
        do
            int32_t eax_12 = *arg1
            int32_t* esi_4 = *(eax_12 + (edi_1 << 3) + 4)
            void* edx_1 = *(eax_12 + (edi_1 << 3))
            
            if (esi_4 != 0)
                esi_4[1]
                esi_4[1] += 1
            
            ecx_6 = sub_6c8650(var_30, edx_1, *(edx_1 + 0x6c), *(edx_1 + 0x70))
            
            if (esi_4 != 0)
                bool cond:1_1 = esi_4[1] != 1
                ecx_6 = esi_4[1]
                esi_4[1] -= 1
                
                if (not(cond:1_1))
                    ecx_6 = (*(*esi_4 + 4))(eax_2)
                    bool cond:2_1 = esi_4[2] != 1
                    esi_4[2]
                    esi_4[2] -= 1
                    
                    if (not(cond:2_1))
                        ecx_6 = (*(*esi_4 + 8))()
            
            edi_1 += 1
        while (edi_1 s< esi_2)
    
    int32_t* var_44_3 = arg2
    int32_t var_48_2 = ecx_6
    sub_579a70(*arg1, arg1[1])
    arg1[1] = *arg1
    sub_578460(arg1, &var_30)
    result = arg2
    int32_t* eax_19 = var_30
    var_30 = nullptr
    int32_t var_20_2 = 1
    *result = eax_19
    int32_t* eax_20 = var_2c
    result[1] = 0
    esi_3 = result[1]
    var_2c = esi_3
    result[1] = eax_20
    var_8_2.b = 0
    
    if (esi_3 != 0)
        cond:0_1 = esi_3[1] != 1
        esi_3[1]
        esi_3[1] -= 1
        goto label_6c9b8b
else
    result = arg2
    *result = 0
    result[1] = 0
    var_8_2.b = eax_5
    esi_3 = var_2c
    int32_t var_20_1 = 1
    
    if (esi_3 != 0)
        cond:0_1 = esi_3[1] != 1
        esi_3[1]
        esi_3[1] -= 1
    label_6c9b8b:
        
        if (not(cond:0_1))
            (*(*esi_3 + 4))(eax_2)
            int32_t ebx_1 = esi_3[2]
            esi_3[2] -= 1
            
            if (ebx_1 == 1)
                (*(*esi_3 + 8))()
fsbase->NtTib.ExceptionList = ExceptionList
return result
