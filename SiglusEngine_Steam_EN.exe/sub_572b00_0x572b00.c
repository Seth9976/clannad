// 函数: sub_572b00
// 地址: 0x572b00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t Msg = arg2
void lParam
WPARAM var_1c
int32_t var_18
int32_t var_14
WPARAM var_10
WPARAM eax_13
WPARAM ecx_4
WPARAM esi_2
bool cond:0_1

if (Msg == 0x100)
    switch (arg3)
        case 0x21
            sub_572920(arg3 - 0x1f, 0)
            Msg = arg2
        case 0x22
            sub_572920(arg3 - 0x1f, 0)
            Msg = arg2
        case 0x23
            int32_t var_20_4 = 0x17
            eax_13 = SendMessageA(GetDlgItem(data_1c054fc, 0x4fe4), 0xea, 0, &lParam)
            ecx_4 = var_18 - var_14 + 1
            
            if (var_10 s< ecx_4)
                cond:0_1 = ecx_4 s< var_1c
                esi_2 = ecx_4
                goto label_572ce8
            
            Msg = arg2
        case 0x24
            int32_t var_20_3 = 0x17
            SendMessageA(GetDlgItem(data_1c054fc, 0x4fe4), 0xea, 0, &lParam)
            esi_2 = var_1c
            
            if (var_10 s> esi_2)
                eax_13 = var_18 - var_14 + 1
                
                if (esi_2 s> eax_13)
                    esi_2 = eax_13
                
                goto label_572cf1
            
            Msg = arg2
        case 0x26
            sub_572920(0, 0)
            Msg = arg2
        case 0x28
            sub_572920(arg3 - 0x27, 0)
            Msg = arg2
else if (Msg == 0x20a)
    int32_t ecx = sx.d((arg3 u>> 0x10).w)
    HWND hDlg = data_1c054fc
    
    if (ecx s<= 0)
        int32_t ecx_1 = neg.d(ecx)
        
        if (ecx_1 s< 0x78)
            ecx_1 = 0x78
        
        int32_t var_20_2 = 0x17
        SendMessageA(GetDlgItem(hDlg, 0x4fe4), 0xea, 0, &lParam)
        eax_13 = var_10
        ecx_4 = var_18 - var_14 + 1
        
        if (eax_13 s>= ecx_4)
            Msg = arg2
        else
            esi_2 = ecx_1 s/ 0x78 * 3 + eax_13
            cond:0_1 = esi_2 s< var_1c
        label_572ce8:
            
            if (cond:0_1)
                esi_2 = var_1c
            
            if (esi_2 s<= ecx_4)
                goto label_572cf1
            
            esi_2 = ecx_4
        label_572cf1:
            int32_t ecx_10 = data_20f022c
            int32_t edx_7 = ecx_10 * 9
            (&data_20f02a4)[edx_7] = esi_2
            sub_572570(eax_13, (&data_20f02a0)[edx_7], ecx_10, esi_2, (&data_20f02a8)[edx_7], 
                (&data_20f02ac)[edx_7], (&data_20f02b0)[edx_7], (&data_20f02b4)[edx_7], 
                (&data_20f02b8)[edx_7], (&data_20f02bc)[edx_7], 0)
            Msg = arg2
    else
        if (ecx s< 0x78)
            ecx = 0x78
        
        int32_t var_20_1 = 0x17
        SendMessageA(GetDlgItem(hDlg, 0x4fe4), 0xea, 0, &lParam)
        
        if (var_10 s> var_1c)
            esi_2 = var_10 - ecx s/ 0x78 * 3
            
            if (esi_2 s< var_1c)
                esi_2 = var_1c
            
            eax_13 = var_18 - var_14 + 1
            
            if (esi_2 s> eax_13)
                esi_2 = eax_13
            
            goto label_572cf1
        
        Msg = arg2

for (int32_t i = 0; i s< 4; i += 1)
    if (arg1 == *((i << 2) + &data_20f20b0))
        LRESULT result = CallWindowProcA(*((i << 2) + &data_20f20c0), arg1, Msg, arg3, arg4)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
