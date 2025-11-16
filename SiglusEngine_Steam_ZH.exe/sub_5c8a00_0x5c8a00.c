// 函数: sub_5c8a00
// 地址: 0x5c8a00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2

if (esi == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

if (arg1[0x18] != esi)
    (*(*esi + 4))(esi)
    int32_t* eax_5 = arg1[0x18]
    arg1[0x18] = esi
    
    if (eax_5 != 0)
        (*(*eax_5 + 8))(eax_5)

int32_t eax_6 = *esi
int32_t* var_18 = nullptr
(*eax_6)(esi, 0xaf22d8, &arg1[0x19])
int32_t* ecx_3 = arg1[0x19]

if (ecx_3 != 0)
    void* esi_1 = &arg1[0x28]
    (*(*ecx_3 + 0x58))(ecx_3, 1, esi_1)
    
    if ((*esi_1 & 0x20000) != 0)
        sub_5cc0d0(&var_18, (*(*arg1 + 0x10))(eax_2))
        int32_t var_8_1 = 0
        int32_t* eax_10 = arg1[0x19]
        (*(*eax_10 + 0xc))(eax_10, var_18)
        int32_t var_8_2 = 0xffffffff
        int32_t* eax_11 = var_18
        
        if (eax_11 != 0)
            (*(*eax_11 + 8))(eax_11)
    
    char arg_8
    int32_t* arg_c
    int32_t esi_2
    
    if (arg_8 == 0)
        int32_t* edx_1 = arg1[0x19]
        int32_t* ecx_8 = nullptr
        arg_8.d = 0
        
        if (edx_1 != 0)
            int32_t eax_13 = (**edx_1)(edx_1, 0xaf2620, &arg_8)
            ecx_8 = arg_8.d
            
            if (eax_13 s< 0)
                ecx_8 = nullptr
            
            arg_8.d = ecx_8
        
        int32_t var_8_3 = 1
        
        if (ecx_8 != 0)
            int32_t* edx_2 = arg_c
            int32_t eax_14 = *ecx_8
            
            if (edx_2 == 0)
                esi_2 = (*(eax_14 + 0x20))(ecx_8)
            else
                esi_2 = (*(eax_14 + 0x14))(ecx_8, edx_2)
            
            goto label_5c8b81
        
        if (arg_c != 0)
            int32_t* esi_3 = arg1[0x19]
            int32_t* edx_3 = nullptr
            var_18 = nullptr
            
            if (esi_3 != 0)
                int32_t eax_18 = (**esi_3)(esi_3, 0xaf2630, &var_18)
                edx_3 = var_18
                
                if (eax_18 s< 0)
                    edx_3 = nullptr
                
                ecx_8 = arg_8.d
                var_18 = edx_3
            
            var_8_3.b = 2
            
            if (edx_3 == 0)
                esi_2 = 0
            else
                int32_t eax_20 = (*(*edx_3 + 0x14))(edx_3, arg_c)
                ecx_8 = arg_8.d
                esi_2 = eax_20
                edx_3 = var_18
            
            var_8_3.b = 1
            
            if (edx_3 != 0)
                (*(*edx_3 + 8))(edx_3)
            label_5c8b81:
                ecx_8 = arg_8.d
            
            if (esi_2 s< 0)
                if ((arg1[0x28] & 0x20000) != 0)
                    int32_t* eax_22 = arg1[0x19]
                    (*(*eax_22 + 0xc))(eax_22, 0)
                    ecx_8 = arg_8.d
                
                arg1[0x28] = 0
                int32_t* edx_4 = arg1[0x19]
                
                if (edx_4 != 0)
                    arg1[0x19] = 0
                    (*(*edx_4 + 8))(edx_4)
                    ecx_8 = arg_8.d
                
                int32_t* edx_5 = arg1[0x18]
                
                if (edx_5 != 0)
                    arg1[0x18] = 0
                    (*(*edx_5 + 8))(edx_5)
                    ecx_8 = arg_8.d
                
                int32_t var_8_4 = 0xffffffff
                
                if (ecx_8 != 0)
                    (*(*ecx_8 + 8))(ecx_8)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return esi_2
            
            esi_1 = &arg1[0x28]
        
        int32_t var_8_5 = 0xffffffff
        
        if (ecx_8 != 0)
            (*(*ecx_8 + 8))(ecx_8)
    
    if ((*esi_1 & 0x20000) == 0)
        sub_5cc0d0(&arg_8, (*(*arg1 + 0x10))(eax_2))
        int32_t var_8_6 = 3
        int32_t* eax_30 = arg1[0x19]
        (*(*eax_30 + 0xc))(eax_30, arg_8.d)
        int32_t var_8_7 = 0xffffffff
        int32_t* eax_31 = arg_8.d
        
        if (eax_31 != 0)
            (*(*eax_31 + 8))(eax_31)
    
    int32_t* ecx_16 = arg1[0x19]
    arg1[0x24] = 0
    int32_t* eax_33 = (**ecx_16)(ecx_16, 0xaf22c8, &arg1[0x1c])
    var_18 = eax_33
    
    if (eax_33 s>= 0)
        arg1[0x24] = 7
    else
        int32_t* eax_34 = arg1[0x19]
        int32_t* eax_35 = (**eax_34)(eax_34, 0xaf22b8, &arg1[0x1c])
        var_18 = eax_35
        
        if (eax_35 s< 0)
            int32_t* eax_36 = arg1[0x19]
            int32_t* eax_37 = (**eax_36)(eax_36, 0xaf22a8, &arg1[0x1c])
            var_18 = eax_37
            
            if (eax_37 s>= 0)
                arg1[0x24] = 1
        else
            arg1[0x24] = 3
    
    int32_t* eax_39 = (*(*arg1 + 0x10))(eax_2)
    int32_t* ecx_20 = nullptr
    int32_t* var_14 = nullptr
    
    if (eax_39 != 0)
        int32_t eax_40 = (**eax_39)(eax_39, 0xaf242c, &var_14)
        ecx_20 = var_14
        
        if (eax_40 s< 0)
            ecx_20 = nullptr
        
        var_14 = ecx_20
    
    int32_t var_8_8 = 4
    int32_t* edx_9 = arg1[0x19]
    (*(*edx_9 + 0x4c))(edx_9, ecx_20, &arg1[0x27])
    int32_t* ecx_22 = arg1[0x1c]
    
    if (ecx_22 != 0)
        (*(*ecx_22 + 0x1c))(ecx_22, 1, 0, var_14)
    
    int32_t* eax_43 = arg1[0x19]
    (*(*eax_43 + 0x14))(eax_43, u"AXWIN", 0)
    
    if ((arg1[0x28] & 0x400) == 0)
        GetClientRect(arg1[1], &arg1[0x2d])
        arg1[0x2b] = arg1[0x2f] - arg1[0x2d]
        arg1[0x2c] = arg1[0x30] - arg1[0x2e]
        sub_5c5560(&arg1[0x2b], &arg1[0x29])
        int32_t* eax_48 = arg1[0x19]
        esi_2 = (*(*eax_48 + 0x44))(eax_48, 1, &arg1[0x29])
        
        if (esi_2 s< 0)
        label_5c8ea9:
            int32_t var_8_12 = 0xffffffff
            int32_t* eax_67 = var_14
            
            if (eax_67 == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return esi_2
            
            (*(*eax_67 + 8))(eax_67)
            fsbase->NtTib.ExceptionList = ExceptionList
            return esi_2
        
        int32_t* eax_50 = arg1[0x19]
        esi_2 = (*(*eax_50 + 0x48))(eax_50, 1, &arg1[0x29])
        
        if (esi_2 s< 0)
            goto label_5c8ea9
        
        sub_5c54d0(&arg1[0x29], &arg1[0x2b])
        arg1[0x2f] = arg1[0x2d] + arg1[0x2b]
        arg1[0x30] = arg1[0x2c] + arg1[0x2e]
        sub_5cc0d0(&arg_c, (*(*arg1 + 0x10))())
        var_8_8.b = 5
        int32_t* eax_58 = arg1[0x19]
        int32_t* eax_59 = (*(*eax_58 + 0x2c))(eax_58, 0xfffffffb, 0, arg_c, 0, arg1[1], &arg1[0x2d])
        HWND hWnd = arg1[1]
        var_18 = eax_59
        RedrawWindow(hWnd, nullptr, nullptr, 
            RDW_INVALIDATE | RDW_INTERNALPAINT | RDW_ERASE | RDW_UPDATENOW | RDW_FRAME)
        var_8_8.b = 4
        int32_t* eax_60 = arg_c
        
        if (eax_60 != 0)
            (*(*eax_60 + 8))(eax_60)
    
    int32_t var_8_9 = 0xffffffff
    int32_t* eax_61 = var_14
    
    if (eax_61 != 0)
        (*(*eax_61 + 8))(eax_61)
    
    esi = arg2

int32_t* var_1c = nullptr
int32_t var_8_10 = 6
(**esi)(esi, 0xaf2650, &var_1c)
int32_t* esi_10 = var_1c

if (esi_10 != 0)
    (*(*esi_10 + 0xc))(esi_10, (*(*arg1 + 0x10))(eax_2))
    esi_10 = var_1c

int32_t var_8_11 = 0xffffffff

if (esi_10 != 0)
    (*(*esi_10 + 8))(esi_10)

fsbase->NtTib.ExceptionList = ExceptionList
return var_18
