// 函数: sub_6f7db0
// 地址: 0x6f7db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cdad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = arg1[0x54] != 0x40
int32_t var_14 = 0
int32_t var_3c

if (not(cond:0))
    int32_t* edx_1 = data_4ebee38
    int32_t* var_28_1 = &var_14
    int32_t esi_1 = *edx_1
    int32_t var_30_1 = 0x40
    int32_t var_34_1 = arg1[0x79]
    int32_t var_38_1 = arg1[6]
    var_3c = arg1[1]
    
    if ((*(esi_1 + 0x40))(edx_1, var_3c, var_38_1, var_34_1, var_30_1, &arg1[0x56], var_28_1) s< 0)
        arg1[0x54] = 0x20

if (arg1[0x54] == 0x20)
    int32_t* ecx = data_4ebee38
    int32_t* var_28_2 = &var_14
    int32_t edx_2 = *ecx
    int32_t var_30_2 = 0x20
    int32_t var_34_2 = arg1[0x79]
    int32_t var_38_2 = arg1[6]
    var_3c = arg1[1]
    int32_t eax_6 =
        (*(edx_2 + 0x40))(ecx, var_3c, var_38_2, var_34_2, var_30_2, &arg1[0x56], var_28_2)
    
    if (eax_6 s< 0)
        int16_t* eax_7
        int32_t edx_3
        eax_7, edx_3 = sub_52e820(&var_3c, u"CreateDevice")
        sub_6f1a40(eax_7, edx_3, eax_6, var_3c)
        int32_t eax_8
        eax_8.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8

int32_t var_8_1 = 0
int32_t* eax_9 = *arg1
int32_t var_18 = 0
*arg1 = var_14

if (eax_9 != 0)
    (*(*eax_9 + 8))(eax_9)

eax_9.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
