// 函数: sub_5bebe0
// 地址: 0x5bebe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

struct boost::any::placeholder::boost::any::holder<class boost::shared_ptr<class C_elm_str_list> >::VTable
    ** esi = sub_745f3f(0xc)

if (esi == 0)
    esi = nullptr
else
    *esi = &boost::any::holder<class boost::shared_ptr<class C_elm_str_list> >::`vftable'{for `boost::any::placeholder'}
    esi[1] = *arg2
    void* eax_1 = arg2[1]
    esi[2] = eax_1
    
    if (eax_1 != 0)
        *(eax_1 + 4)
        *(eax_1 + 4) += 1

struct boost::any::placeholder::boost::any::holder<class boost::shared_ptr<class C_elm_str_list> >::VTable
    ** ecx_2 = *arg1
*arg1 = esi

if (ecx_2 != 0)
    (*ecx_2)->vFunc_0(1)

return arg1
