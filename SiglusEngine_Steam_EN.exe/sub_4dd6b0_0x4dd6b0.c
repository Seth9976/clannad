// 函数: sub_4dd6b0
// 地址: 0x4dd6b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??_U@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
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
(*eax_6)(esi, 0x61d380, &arg1[0x19])
int32_t* ecx_3 = arg1[0x19]

if (ecx_3 != 0)
    void* esi_1 = &arg1[0x28]
    (*(*ecx_3 + 0x58))(ecx_3, 1, esi_1)
    
    if ((*esi_1 & 0x20000) != 0)
        int32_t* eax_9 = (*(*arg1 + 0x10))(eax_2)
        int32_t* ecx_5 = nullptr
        var_18 = nullptr
        
        if (eax_9 != 0)
            int32_t eax_11 = (**eax_9)(eax_9, 0x61d56c, &var_18)
            ecx_5 = var_18
            
            if (eax_11 s< 0)
                ecx_5 = nullptr
            
            var_18 = ecx_5
        
        int32_t var_8_1 = 0
        int32_t* eax_12 = arg1[0x19]
        (*(*eax_12 + 0xc))(eax_12, ecx_5)
        int32_t var_8_2 = 0xffffffff
        int32_t* eax_13 = var_18
        
        if (eax_13 != 0)
            (*(*eax_13 + 8))(eax_13)
    
    char arg_8
    int32_t* arg_c
    int32_t esi_2
    
    if (arg_8 == 0)
        int32_t* edx_3 = arg1[0x19]
        int32_t* ecx_7 = nullptr
        arg_8.d = 0
        
        if (edx_3 != 0)
            int32_t eax_15 = (**edx_3)(edx_3, 0x61d6c0, &arg_8)
            ecx_7 = arg_8.d
            
            if (eax_15 s< 0)
                ecx_7 = nullptr
            
            arg_8.d = ecx_7
        
        int32_t var_8_3 = 1
        
        if (ecx_7 != 0)
            int32_t* edx_4 = arg_c
            int32_t eax_16 = *ecx_7
            
            if (edx_4 == 0)
                esi_2 = (*(eax_16 + 0x20))(ecx_7)
            else
                esi_2 = (*(eax_16 + 0x14))(ecx_7, edx_4)
            
            goto label_4dd84c
        
        if (arg_c != 0)
            int32_t* esi_3 = arg1[0x19]
            int32_t* edx_5 = nullptr
            var_18 = nullptr
            
            if (esi_3 != 0)
                int32_t eax_20 = (**esi_3)(esi_3, 0x61d6d0, &var_18)
                edx_5 = var_18
                
                if (eax_20 s< 0)
                    edx_5 = nullptr
                
                ecx_7 = arg_8.d
                var_18 = edx_5
            
            var_8_3.b = 2
            
            if (edx_5 == 0)
                esi_2 = 0
            else
                int32_t eax_22 = (*(*edx_5 + 0x14))(edx_5, arg_c)
                ecx_7 = arg_8.d
                esi_2 = eax_22
                edx_5 = var_18
            
            var_8_3.b = 1
            
            if (edx_5 != 0)
                (*(*edx_5 + 8))(edx_5)
            label_4dd84c:
                ecx_7 = arg_8.d
            
            if (esi_2 s< 0)
                if ((arg1[0x28] & 0x20000) != 0)
                    int32_t* eax_24 = arg1[0x19]
                    (*(*eax_24 + 0xc))(eax_24, 0)
                    ecx_7 = arg_8.d
                
                arg1[0x28] = 0
                int32_t* edx_6 = arg1[0x19]
                
                if (edx_6 != 0)
                    arg1[0x19] = 0
                    (*(*edx_6 + 8))(edx_6)
                    ecx_7 = arg_8.d
                
                int32_t* edx_7 = arg1[0x18]
                
                if (edx_7 != 0)
                    arg1[0x18] = 0
                    (*(*edx_7 + 8))(edx_7)
                    ecx_7 = arg_8.d
                
                int32_t var_8_4 = 0xffffffff
                
                if (ecx_7 != 0)
                    (*(*ecx_7 + 8))(ecx_7)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return esi_2
            
            esi_1 = &arg1[0x28]
        
        int32_t var_8_5 = 0xffffffff
        
        if (ecx_7 != 0)
            (*(*ecx_7 + 8))(ecx_7)
    
    if ((*esi_1 & 0x20000) == 0)
        sub_4df210(&arg_8, (*(*arg1 + 0x10))(eax_2))
        int32_t var_8_6 = 3
        int32_t* eax_32 = arg1[0x19]
        (*(*eax_32 + 0xc))(eax_32, arg_8.d)
        int32_t var_8_7 = 0xffffffff
        int32_t* eax_33 = arg_8.d
        
        if (eax_33 != 0)
            (*(*eax_33 + 8))(eax_33)
    
    int32_t* ecx_15 = arg1[0x19]
    arg1[0x24] = 0
    int32_t* eax_35 = (**ecx_15)(ecx_15, 0x61d370, &arg1[0x1c])
    var_18 = eax_35
    
    if (eax_35 s>= 0)
        arg1[0x24] = 7
    else
        int32_t* eax_36 = arg1[0x19]
        int32_t* eax_37 = (**eax_36)(eax_36, 0x61d360, &arg1[0x1c])
        var_18 = eax_37
        
        if (eax_37 s< 0)
            int32_t* eax_38 = arg1[0x19]
            int32_t* eax_39 = (**eax_38)(eax_38, 0x61d350, &arg1[0x1c])
            var_18 = eax_39
            
            if (eax_39 s>= 0)
                arg1[0x24] = 1
        else
            arg1[0x24] = 3
    
    int32_t* eax_41 = (*(*arg1 + 0x10))(eax_2)
    int32_t* ecx_19 = nullptr
    int32_t* var_14 = nullptr
    
    if (eax_41 != 0)
        int32_t eax_42 = (**eax_41)(eax_41, 0x61d4cc, &var_14)
        ecx_19 = var_14
        
        if (eax_42 s< 0)
            ecx_19 = nullptr
        
        var_14 = ecx_19
    
    int32_t var_8_8 = 4
    int32_t* edx_11 = arg1[0x19]
    (*(*edx_11 + 0x4c))(edx_11, ecx_19, &arg1[0x27])
    int32_t* ecx_21 = arg1[0x1c]
    
    if (ecx_21 != 0)
        (*(*ecx_21 + 0x1c))(ecx_21, 1, 0, var_14)
    
    int32_t* eax_45 = arg1[0x19]
    (*(*eax_45 + 0x14))(eax_45, u"AXWIN", 0)
    
    if ((arg1[0x28] & 0x400) == 0)
        GetClientRect(arg1[1], &arg1[0x2d])
        arg1[0x2b] = arg1[0x2f] - arg1[0x2d]
        arg1[0x2c] = arg1[0x30] - arg1[0x2e]
        sub_4da520(&arg1[0x2b], &arg1[0x29])
        int32_t* eax_50 = arg1[0x19]
        esi_2 = (*(*eax_50 + 0x44))(eax_50, 1, &arg1[0x29])
        
        if (esi_2 s< 0)
        label_4ddb70:
            int32_t var_8_12 = 0xffffffff
            int32_t* eax_69 = var_14
            
            if (eax_69 == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return esi_2
            
            (*(*eax_69 + 8))(eax_69)
            fsbase->NtTib.ExceptionList = ExceptionList
            return esi_2
        
        int32_t* eax_52 = arg1[0x19]
        esi_2 = (*(*eax_52 + 0x48))(eax_52, 1, &arg1[0x29])
        
        if (esi_2 s< 0)
            goto label_4ddb70
        
        sub_4da490(&arg1[0x29], &arg1[0x2b])
        arg1[0x2f] = arg1[0x2b] + arg1[0x2d]
        arg1[0x30] = arg1[0x2e] + arg1[0x2c]
        sub_4df210(&arg_c, (*(*arg1 + 0x10))())
        var_8_8.b = 5
        int32_t* eax_60 = arg1[0x19]
        int32_t* eax_61 = (*(*eax_60 + 0x2c))(eax_60, 0xfffffffb, 0, arg_c, 0, arg1[1], &arg1[0x2d])
        HWND hWnd = arg1[1]
        var_18 = eax_61
        RedrawWindow(hWnd, nullptr, nullptr, 
            RDW_INVALIDATE | RDW_INTERNALPAINT | RDW_ERASE | RDW_UPDATENOW | RDW_FRAME)
        var_8_8.b = 4
        int32_t* eax_62 = arg_c
        
        if (eax_62 != 0)
            (*(*eax_62 + 8))(eax_62)
    
    int32_t var_8_9 = 0xffffffff
    int32_t* eax_63 = var_14
    
    if (eax_63 != 0)
        (*(*eax_63 + 8))(eax_63)
    
    esi = arg2

int32_t* var_1c = nullptr
int32_t var_8_10 = 6
(**esi)(esi, 0x61d6f0, &var_1c)
int32_t* esi_10 = var_1c

if (esi_10 != 0)
    (*(*esi_10 + 0xc))(esi_10, (*(*arg1 + 0x10))(eax_2))
    esi_10 = var_1c

int32_t var_8_11 = 0xffffffff

if (esi_10 != 0)
    (*(*esi_10 + 8))(esi_10)

fsbase->NtTib.ExceptionList = ExceptionList
return var_18
