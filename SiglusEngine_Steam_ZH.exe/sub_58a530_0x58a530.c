// 函数: sub_58a530
// 地址: 0x58a530
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

WPARAM var_3c
int32_t eax_1 = __security_cookie ^ &var_3c
HWND eax_2 = sub_6c4c40(arg1 + 0xe0)
var_3c = sub_6c4be0(arg1 + 0xe0)
int16_t* point = nullptr
int32_t var_34 = 0
GetCursorPos(&point)
POINT point_1
point_1.x = point
point_1.y = var_34
ScreenToClient(*(arg1 + 0xe4), &point_1)
WPARAM var_28
LRESULT eax_4 = sub_6c4ed0(arg1 + 0xe0, point_1.x, point_1.y, &var_28, &point)

if (eax_2 == 1)
    WPARAM esi_1 = var_28
    
    if (var_3c == esi_1 && point == 1)
        eax_4 = sub_58a750(arg1, &point, &var_3c)
        
        if (point != 0)
            int32_t var_24
            int16_t* point_2 = sub_6c4e40(arg1 + 0xe0, &var_24, esi_1, 1)
            int32_t ebx_1 = *(point_2 + 0x14)
            int16_t* point_3
            
            if (ebx_1 u< 8)
                point_3 = point_2
            else
                point_3 = *point_2
            
            void* eax_7 = &point_3[*(point_2 + 0x10)]
            
            if (ebx_1 u>= 8)
                point_2 = *point_2
            
            point = point_2
            WPARAM ebx_2 = 0
            
            if (sub_6af490(eax_7, &var_3c, &point, eax_7) != 0)
                ebx_2 = var_3c
            
            int32_t var_10
            
            if (var_10 u>= 8)
                j__free(var_24)
            
            int32_t eax_9 = sub_6c52d0(arg1 + 0xe0, esi_1, 1, 0x80000000, 0x7fffffff, ebx_2)
            sub_745f2b(eax_1 ^ &var_3c)
            return eax_9
        
        if (var_3c != 0)
            eax_4 = sub_587070(eax_4, esi_1, arg1 + 0xe0, 1)

sub_745f2b(eax_1 ^ &var_3c)
return eax_4
