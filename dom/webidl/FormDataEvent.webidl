/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * The origin of this IDL file is
 * https://html.spec.whatwg.org/multipage/form-control-infrastructure.html#the-formdataevent-interface
 */

[Exposed=Window,
 Pref="dom.formdata.event.enabled"]
interface FormDataEvent : Event {
  constructor(DOMString type, optional FormDataEventInit eventInitDict = {});

  // C++ can't deal with a method called FormData() in the generated code
  [BinaryName="GetFormData"]
  readonly attribute FormData formData;
};

dictionary FormDataEventInit : EventInit {
  required FormData formData;
};
