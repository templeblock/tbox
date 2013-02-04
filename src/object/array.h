/*!The Treasure Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2012, ruki All rights reserved.
 *
 * @author		ruki
 * @file		array.h
 * @ingroup 	object
 *
 */
#ifndef TB_OBJECT_ARRAY_H
#define TB_OBJECT_ARRAY_H

/* ///////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"

/* ///////////////////////////////////////////////////////////////////////
 * interfaces
 */

/*! init array
 *
 * @param grow		the array grow
 *
 * @return 			the array object
 */
tb_object_t* 		tb_array_init(tb_size_t grow);

/*! the array size
 *
 * @param array		the array object
 *
 * @return 			the array size
 */
tb_size_t 			tb_array_size(tb_object_t* array);

/*! the array item at index
 *
 * @param array		the array object
 * @param index		the array index
 *
 * @return 			the array item
 */
tb_object_t* 		tb_array_item(tb_object_t* array, tb_size_t index);

/*! the array iterator
 *
 * @param array		the array object
 *
 * @return 			the array iterator
 *
 * @code
 * tb_iterator_t* 	iterator = tb_array_itor(array);
 * tb_size_t 		itor = tb_iterator_head(iterator);
 * tb_size_t 		tail = tb_iterator_tail(iterator);
 * for (; itor !- tail; itor = tb_iterator_next(iterator, itor))
 * {
 * 		tb_object_t* item = tb_iterator_item(iterator, itor);
 * 		if (item)
 * 		{
 * 			// ...
 * 		}
 * }
 * @codeend
 */
tb_iterator_t* 		tb_array_itor(tb_object_t* array);

/*! remove the item from index
 *
 * @param array		the array object
 * @param index		the array index
 */
tb_void_t 			tb_array_remove(tb_object_t* array, tb_size_t index);

/*! append item to array
 *
 * @param array		the array object
 * @param index		the array index
 */
tb_void_t 			tb_array_append(tb_object_t* array, tb_object_t* item);

/*! insert item to array
 *
 * @param array		the array object
 * @param index		the array index
 * @param item		the array item
 */
tb_void_t 			tb_array_insert(tb_object_t* array, tb_size_t index, tb_object_t* item);

/*! replace item to array
 *
 * @param array		the array object
 * @param index		the array index
 * @param item		the array item
 */
tb_void_t 			tb_array_replace(tb_object_t* array, tb_size_t index, tb_object_t* item);

#endif

