/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <ABI46_0_0React/ABI46_0_0renderer/components/scrollview/ScrollViewEventEmitter.h>
#include <ABI46_0_0React/ABI46_0_0renderer/components/scrollview/ScrollViewProps.h>
#include <ABI46_0_0React/ABI46_0_0renderer/components/scrollview/ScrollViewState.h>
#include <ABI46_0_0React/ABI46_0_0renderer/components/view/ConcreteViewShadowNode.h>
#include <ABI46_0_0React/ABI46_0_0renderer/core/LayoutContext.h>

namespace ABI46_0_0facebook {
namespace ABI46_0_0React {

extern const char ScrollViewComponentName[];

/*
 * `ShadowNode` for <ScrollView> component.
 */
class ScrollViewShadowNode final : public ConcreteViewShadowNode<
                                       ScrollViewComponentName,
                                       ScrollViewProps,
                                       ScrollViewEventEmitter,
                                       ScrollViewState> {
 public:
  using ConcreteViewShadowNode::ConcreteViewShadowNode;

#pragma mark - LayoutableShadowNode

  void layout(LayoutContext layoutContext) override;
  Point getContentOriginOffset() const override;

 private:
  void updateStateIfNeeded();
  void updateScrollContentOffsetIfNeeded();
};

} // namespace ABI46_0_0React
} // namespace ABI46_0_0facebook
