// 函数: sub_4db140
// 地址: 0x4db140
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605518
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL hAccel = arg1[0x26]

if ((hAccel.b & 0x40) == 0)
    int32_t* ecx = arg1[0x1c]
    arg1[0x26] = hAccel | 0x40
    
    if (ecx != 0)
        (*(*ecx + 0x1c))(ecx, 1, 0, 0)
    
    int32_t eax_5 = arg1[0x25]
    
    if (eax_5 != 0xcdcdcdcd)
        sub_4d98c0(arg1[0x18], &arg1[0x20], eax_5)
        arg1[0x25] = 0xcdcdcdcd
    
    int32_t* ecx_2 = arg1[0x19]
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 0x50))(ecx_2, arg1[0x27])
        int32_t* eax_7 = arg1[0x19]
        (*(*eax_7 + 0x18))(eax_7, 1)
        int32_t* eax_8 = arg1[0x19]
        (*(*eax_8 + 0xc))(eax_8, 0)
    
    int32_t* ecx_5 = arg1[0x18]
    
    if (ecx_5 != 0)
        var_14 = nullptr
        int32_t var_8_1 = 0
        (**ecx_5)(ecx_5, 0x61d6f0, &var_14)
        int32_t* eax_10 = var_14
        
        if (eax_10 != 0)
            (*(*eax_10 + 0xc))(eax_10, 0)
            eax_10 = var_14
        
        int32_t var_8_2 = 0xffffffff
        
        if (eax_10 != 0)
            (*(*eax_10 + 8))(eax_10)
    
    int32_t* ecx_8 = arg1[0x1c]
    
    if (ecx_8 != 0)
        arg1[0x1c] = 0
        (*(*ecx_8 + 8))(ecx_8)
    
    arg1[0x24] = 0
    int32_t* ecx_9 = arg1[0x1d]
    
    if (ecx_9 != 0)
        arg1[0x1d] = 0
        (*(*ecx_9 + 8))(ecx_9)
    
    int32_t* ecx_10 = arg1[0x19]
    
    if (ecx_10 != 0)
        arg1[0x19] = 0
        (*(*ecx_10 + 8))(ecx_10)
    
    int32_t* ecx_11 = arg1[0x18]
    
    if (ecx_11 != 0)
        arg1[0x18] = 0
        (*(*ecx_11 + 8))(ecx_11)
    
    int32_t* ecx_12 = arg1[0x1b]
    
    if (ecx_12 != 0)
        arg1[0x1b] = 0
        (*(*ecx_12 + 8))(ecx_12)
    
    int32_t* ecx_13 = arg1[0x1a]
    
    if (ecx_13 != 0)
        arg1[0x1a] = 0
        (*(*ecx_13 + 8))(ecx_13)
    
    arg1[0x26] &= 0xffffffa4
    hAccel = arg1[0x31]
    
    if (hAccel != 0)
        hAccel = DestroyAcceleratorTable(hAccel)
        arg1[0x31] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return hAccel
