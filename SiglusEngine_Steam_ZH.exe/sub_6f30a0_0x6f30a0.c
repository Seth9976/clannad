// 函数: sub_6f30a0
// 地址: 0x6f30a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd5f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_14 = arg1
int32_t eax_3 = data_4ecd208

if ((eax_3.b & 1) == 0)
    data_4ecd20c = 0
    data_4ecd208 = eax_3 | 1
    data_4ecd210 = 0
    data_4ecd214 = 0
    _atexit(sub_aa2b20)

char result = sub_6b7be0(arg2, &data_4ecd20c)

if (result == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

void* var_2c = nullptr
int32_t var_28 = 0
int32_t var_24 = 0
uint32_t var_30 = 0
int32_t var_8_1 = 0
void* ecx_3 = data_4ecd20c
void* edx_1 = data_4ecd210 - ecx_3

if (ecx_3 == data_4ecd210)
    ecx_3 = nullptr

char eax_5
int32_t ecx_5
eax_5, ecx_5 = sub_6dcdb0(&var_30, ecx_3, edx_1)
int32_t* ebx

if (eax_5 == 0)
label_6f32b8:
    ebx.b = 0
else
    int32_t esi_3 = (var_28 - var_2c) s/ 0x30
    ecx_5 = sub_6f3370(arg1, esi_3)
    arg2 = nullptr
    
    if (esi_3 s> 0)
        ebx = var_2c + 8
        void** edi_1 = nullptr
        
        do
            if (ebx[-1] s> 0 && *ebx s> 0)
                int32_t* eax_7
                int32_t* ecx_9
                eax_7, ecx_9 = sub_745f3f(0x28)
                void* const eax_8
                
                if (eax_7 == 0)
                    eax_8 = nullptr
                else
                    ecx_9 = eax_7
                    eax_8 = sub_6f3550(ecx_9)
                
                int32_t* var_1c = nullptr
                var_8_1.b = 1
                int32_t* var_48_2 = &var_1c
                sub_69e2f0(eax_8, eax_8, ecx_9)
                int32_t eax_9 = edi_1 << 3
                var_8_1.b = 2
                int32_t* ecx_10 = var_1c
                void** edx_7 = *var_14 + eax_9
                var_1c = nullptr
                int32_t var_20_2 = 0
                *edx_7 = eax_8
                int32_t* edi_2 = edx_7[1]
                edx_7[1] = ecx_10
                
                if (edi_2 != 0)
                    bool cond:1_1 = edi_2[1] != 1
                    edi_2[1] -= 1
                    
                    if (not(cond:1_1))
                        (*(*edi_2 + 4))(eax_2)
                        bool cond:3_1 = edi_2[2] != 1
                        edi_2[2]
                        edi_2[2] -= 1
                        
                        if (not(cond:3_1))
                            (*(*edi_2 + 8))()
                
                var_8_1.b = 0
                int32_t* edi_3 = var_1c
                
                if (edi_3 != 0)
                    bool cond:2_1 = edi_3[1] != 1
                    edi_3[1]
                    edi_3[1] -= 1
                    
                    if (not(cond:2_1))
                        (*(*edi_3 + 4))(eax_2)
                        bool cond:4_1 = edi_3[2] != 1
                        edi_3[2]
                        edi_3[2] -= 1
                        
                        if (not(cond:4_1))
                            (*(*edi_3 + 8))()
                
                eax_5, ecx_5 = sub_6f4cd0(*(eax_9 + *var_14), &ebx[-2], arg3)
                
                if (eax_5 == 0)
                    goto label_6f32b8
                
                edi_1 = arg2
            
            edi_1 += 1
            ebx = &ebx[0xc]
            arg2 = edi_1
        while (edi_1 s< esi_3)
    
    ebx.b = 1

if (var_2c != 0)
    void** var_48_4 = arg2
    int32_t var_4c_2 = ecx_5
    sub_6c9040(var_2c, var_28)
    j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
