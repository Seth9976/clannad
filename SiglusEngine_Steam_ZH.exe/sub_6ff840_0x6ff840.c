// 函数: sub_6ff840
// 地址: 0x6ff840
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce860
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg2
void** eax_3 = sub_669720(&data_4ebe4a8, arg1)
void** ecx = data_4ebe4a8
void** var_38_1

if (eax_3 == ecx)
    var_38_1 = ecx
else
    void* eax_4 = &eax_3[4]
    int32_t ecx_1 = *(eax_4 + 0x10)
    
    if (eax_3[9] u>= 8)
        eax_4 = *eax_4
    
    int32_t var_68_1 = ecx_1
    int32_t eax_5 = sub_536340(arg1, ecx_1, *(arg1 + 0x10), eax_4)
    ecx = data_4ebe4a8
    var_38_1 = eax_3
    
    if (eax_5 s< 0)
        var_38_1 = ecx

int32_t* result

if (var_38_1 == ecx)
    int32_t* result_3
    int32_t* ecx_3
    result_3, ecx_3 = sub_745f3f(4)
    
    if (result_3 == 0)
        result_3 = nullptr
    else
        *result_3 = 0
    
    int32_t* result_2 = result_3
    int32_t* var_3c = nullptr
    int32_t var_8_1 = 0
    int32_t* var_68_3 = &var_3c
    sub_700ee0(result_3, result_3, ecx_3)
    int32_t var_8_2 = 1
    bool cond:1_1 = edi[5] u< 0x10
    void* eax_7 = edi[4]
    int32_t* var_44 = nullptr
    int32_t var_48 = 0
    
    if (not(cond:1_1))
        edi = *edi
    
    int32_t* var_68_4 = &var_44
    int32_t* var_6c_2 = &var_48
    void**** var_70_2 = nullptr
    int32_t* var_74_2 = nullptr
    int32_t var_78_1 = 0
    int32_t var_7c = 0
    int32_t* eax_8 =
        sub_407673(data_4ebe4b0, edi, eax_7, var_7c, var_78_1, var_74_2, var_70_2, var_6c_2)
    int32_t* result_1
    
    if (eax_8 s>= 0)
        var_8_2.b = 4
        int32_t* result_4 = result_2
        int32_t var_4c_1 = 0
        int32_t* eax_11 = *result_4
        *result_4 = var_48
        
        if (eax_11 != 0)
            (*(*eax_11 + 8))(eax_11)
        
        var_8_2.b = 1
        var_8_2.b = 5
        void var_34
        int32_t* eax_14
        void* ecx_13
        eax_14, ecx_13 = sub_700f50(sub_700e90(&result_2, arg1, &var_34, &result_2))
        int32_t* var_68_13 = eax_14
        void* var_6c_4 = &eax_14[4]
        void* var_50
        sub_700fd0(&var_50, ecx_13)
        var_8_2.b = 1
        sub_687cd0(&var_34)
        result_1 = result_2
    else
        int32_t* edx_2 = var_44
        char* eax_9
        
        if (edx_2 == 0)
            eax_9 = &data_b0018c
        else
            eax_9 = (*(*edx_2 + 0xc))(edx_2)
        
        int32_t var_2c
        sub_541920(&var_2c, eax_9)
        var_8_2.b = 2
        int32_t* var_38_2 = &var_7c
        sub_52e820(&var_7c, u"D3DXCreateEffect")
        var_8_2.b = 3
        void var_94
        int16_t* eax_10
        int32_t edx_3
        eax_10, edx_3 = sub_6af1e0(&var_94)
        var_8_2.b = 2
        sub_6f1ae0(eax_10, edx_3, eax_8)
        var_8_2.b = 1
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        int16_t* lpText = sub_6b9ed0(&var_2c)
        
        if (*(lpText + 0x14) u>= 8)
            lpText = *lpText
        
        MessageBoxW(nullptr, lpText, nullptr, MB_OK)
        
        if (var_18 u>= 8)
            j__free(var_2c)
        
        result_1 = nullptr
    
    int32_t var_8_3 = 0xffffffff
    int32_t* esi_2 = var_3c
    
    if (esi_2 != 0)
        bool cond:2_1 = esi_2[1] != 1
        esi_2[1]
        esi_2[1] -= 1
        
        if (not(cond:2_1))
            (*(*esi_2 + 4))(eax_2)
            int32_t edi_1 = esi_2[2]
            esi_2[2] -= 1
            
            if (edi_1 == 1)
                (*(*esi_2 + 8))()
    
    result = result_1
else
    result = var_38_1[0xa]

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
