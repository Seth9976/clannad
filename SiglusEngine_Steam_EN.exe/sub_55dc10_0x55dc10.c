// 函数: sub_55dc10
// 地址: 0x55dc10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_55a6a0(eax_1, arg1, 0x1d, 0x621b64)
HWND esi = data_1af0a84
HWND ebx = esi
HWND var_2c = esi

if (data_1315d78 == 0)
    UpdateWindow(esi)
    SetWindowPos(esi, 0xfffffffe, data_1315d80, data_1315d84, data_1315d88, data_1315d8c, 
        SWP_SHOWWINDOW)
    esi = data_1af0a84
    var_2c = esi

HWND result
int32_t ecx

if (data_12dc4bc == 0)
    result, ecx = GetDlgItem(esi, 0x4f32)
    
    if (result != 0)
        HWND hWnd_1 = GetDlgItem(esi, 0x4f32)
        int32_t var_48_5 = 0x63fcb0
        result, ecx = sub_55a710(
            SendMessageA(hWnd_1, 0x1036, 0, SendMessageA(hWnd_1, 0x1037, 0, 0) | 0x21), 0x4f32, 
            var_2c, data_1315d78, &data_1315d78, 9, &data_63fd10, 0x63fcb0)
else
    result, ecx = GetDlgItem(esi, 0x4f32)
    
    if (result != 0)
        HWND hWnd = GetDlgItem(esi, 0x4f32)
        int32_t var_48_3 = 0x63fcb0
        result, ecx = sub_55a710(
            SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 0x4f32, var_2c, 
            data_1315d78, &data_1315d78, 9, &data_63fce0, 0x63fcb0)

bool cond:2 = data_1321ebc == 0
data_20c54b8 = 0
data_20c54bc = 0

if (not(cond:2))
    result = data_1321eb8
    
    if (result s> 0)
        ecx = sub_4d6960(result, &data_20c54bc, &data_20c54b8, result, "CGTableUpdataFlag")
        void* esi_1 = data_1321ec0
        int32_t i = 0
        result = data_20c54bc
        void* var_2c_1 = esi_1
        HWND result_1 = result
        
        if (data_1321eb8 s> 0)
            int32_t ebx_1 = data_1333e3c
            
            do
                int32_t i_1 = i
                void var_28
                sub_4c84d0(&var_28, "%03d")
                int32_t eax_7 = data_1333e40
                
                if (eax_7 != 0)
                    eax_7(0, &var_28, i, i, ebx, 0x4f32)
                    ebx_1 = data_1333e3c
                
                if (ebx_1 != 0)
                    ebx_1(1, esi_1, i, i, ebx, 0x4f32)
                    ebx_1 = data_1333e3c
                
                int32_t var_48_6 = *(esi_1 + 0x20)
                char const* const var_4c_9
                
                if (data_12dc4bc == 0)
                    var_4c_9 = "Z[%04d]"
                else
                    var_4c_9 = "Zb[%05d]"
                
                sub_4c84d0(&var_28, var_4c_9)
                
                if (ebx_1 != 0)
                    ebx_1(3, &var_28, i, i, ebx, 0x4f32)
                    ebx_1 = data_1333e3c
                
                int32_t j = 0
                void* eax_9 = var_2c_1 + 0x24
                void* var_34_1 = eax_9
                
                do
                    int32_t var_48_7 = *eax_9
                    ecx = sub_4c84d0(&var_28, "%03d")
                    
                    if (ebx_1 != 0)
                        ecx = ebx_1(j + 4, &var_28, i, i, ebx, 0x4f32)
                        ebx_1 = data_1333e3c
                    
                    j += 1
                    eax_9 = var_34_1 + 4
                    var_34_1 = eax_9
                while (j s< 5)
                
                i += 1
                esi_1 = var_2c_1 + 0x3c
                var_2c_1 = esi_1
                result_1->unused.b = 0xff
                result = &result_1->unused + 1
                result_1 = result
            while (i s< data_1321eb8)

if (data_1315d78 == 0)
    int32_t var_48_8 = ecx
    result = sub_4c1470(result, data_1315d94, data_1315d90, ebx, 0x4f32)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
