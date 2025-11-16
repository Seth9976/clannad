// 函数: sub_55e060
// 地址: 0x55e060
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_55a6a0(eax_1, arg1, 0x33, 0x621bc0)
HWND esi = data_1af0adc
HWND ebx = esi
HWND var_2c = esi
HWND var_30 = ebx

if (data_1317638 == 0)
    UpdateWindow(esi)
    SetWindowPos(esi, 0xfffffffe, data_1317640, data_1317644, data_1317648, data_131764c, 
        SWP_SHOWWINDOW)
    esi = data_1af0adc
    var_2c = esi

HWND result
void* ecx

if (data_12dc4bc == 0)
    result, ecx = GetDlgItem(esi, 0x4f32)
    
    if (result != 0)
        HWND hWnd_1 = GetDlgItem(esi, 0x4f32)
        void* var_50_5 = &data_63fd40
        result, ecx = sub_55a710(
            SendMessageA(hWnd_1, 0x1036, 0, SendMessageA(hWnd_1, 0x1037, 0, 0) | 0x21), 0x4f32, 
            var_2c, data_1317638, &data_1317638, 0xe, &data_63fdc0, &data_63fd40)
else
    result, ecx = GetDlgItem(esi, 0x4f32)
    
    if (result != 0)
        HWND hWnd = GetDlgItem(esi, 0x4f32)
        void* var_50_3 = &data_63fd40
        result, ecx = sub_55a710(
            SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 0x4f32, var_2c, 
            data_1317638, &data_1317638, 0xe, &data_63fd80, &data_63fd40)

bool cond:2 = data_1321eb0 == 0
data_20c54c0 = 0
data_20c54c4 = 0

if (not(cond:2))
    result = data_1321eac
    
    if (result s> 0 && data_1321ebc != 0 && data_1321eb8 s> 0)
        sub_4d6960(result, &data_20c54c4, &data_20c54c0, result, "CGTableGroupeUpdataFlag")
        result = data_1321eb4
        int32_t i = 0
        ecx = data_20c54c4
        HWND result_1 = result
        void* var_3c_1 = ecx
        
        if (data_1321eac s> 0)
            int32_t esi_1 = data_1333e3c
            
            do
                int32_t unused = result->unused
                int32_t unused_1 = unused
                int32_t i_1 = i
                void* eax_8 = data_1321ec0 + unused * 0x3c
                void var_28
                sub_4c84d0(&var_28, "%03d (%03d)")
                int32_t eax_9 = data_1333e40
                
                if (eax_9 != 0)
                    eax_9(0, &var_28, i, i, ebx, 0x4f32)
                    esi_1 = data_1333e3c
                
                if (esi_1 != 0)
                    esi_1(1, eax_8, i, i, ebx, 0x4f32)
                    esi_1 = data_1333e3c
                
                int32_t j = 0
                void* __offset(HWND__, 0x18) eax_11 = &result_1[6]
                void* __offset(HWND__, 0x18) var_34_1 = eax_11
                
                do
                    struct HWND__ var_50_6 = eax_11 - 0x18
                    sub_4c84d0(&var_28, "%03d")
                    
                    if (esi_1 != 0)
                        esi_1(j + 3, &var_28, i, i, var_30, 0x4f32)
                        esi_1 = data_1333e3c
                    
                    j += 1
                    eax_11 = var_34_1 + 4
                    var_34_1 = eax_11
                while (j s< 5)
                
                int32_t var_50_7 = *(eax_8 + 0x20)
                char const* const var_54_10
                
                if (data_12dc4bc == 0)
                    var_54_10 = "Z[%04d]"
                else
                    var_54_10 = "Zb[%05d]"
                
                sub_4c84d0(&var_28, var_54_10)
                
                if (esi_1 != 0)
                    esi_1(8, &var_28, i, i, var_30, 0x4f32)
                    esi_1 = data_1333e3c
                
                int32_t j_1 = 0
                void* eax_16 = eax_8 + 0x24
                void* var_34_2 = eax_16
                
                do
                    int32_t var_50_8 = *eax_16
                    sub_4c84d0(&var_28, "%03d")
                    
                    if (esi_1 != 0)
                        esi_1(j_1 + 9, &var_28, i, i, var_30, 0x4f32)
                        esi_1 = data_1333e3c
                    
                    j_1 += 1
                    eax_16 = var_34_2 + 4
                    var_34_2 = eax_16
                while (j_1 s< 5)
                
                char* ecx_5 = var_3c_1
                i += 1
                ebx = var_30
                result = &result_1[0xb]
                result_1 = result
                *ecx_5 = 0xff
                ecx = &ecx_5[1]
                var_3c_1 = ecx
            while (i s< data_1321eac)

if (data_1317638 == 0)
    void* var_50_9 = ecx
    result = sub_4c1470(result, data_1317654, data_1317650, ebx, 0x4f32)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
